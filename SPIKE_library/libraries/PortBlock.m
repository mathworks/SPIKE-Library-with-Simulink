classdef PortBlock

    methods(Static)

        % Use the code browser on the left to add the callbacks.


        function SensorType(callbackContext)
            if get_param(gcb, 'SensorType') == "Force"
                set_param(gcb, 'MaskVisibilities', {'on', 'on', 'off', 'off'});
            elseif get_param(gcb, 'SensorType') == "Color"
                set_param(gcb, 'MaskVisibilities', {'on', 'on', 'on', 'on'});
            elseif get_param(gcb, 'SensorType') == "Ultrasonic"
                set_param(gcb, 'MaskVisibilities', {'on', 'on', 'off', 'on'});
            else
                set_param(gcb, 'MaskVisibilities', {'on', 'on', 'off', 'off'});
            end
            
            outportHandle = get_param([gcb, '/', get_param(gcb, 'SensorType'), '/Out1'], 'PortHandles');
            lineHandle = get_param(outportHandle.Inport, 'Line');
            set_param(lineHandle, 'Name', get_param(gcb, 'SensorType') +"_Port "+ get_param(gcb, 'PortID'));
        end

        function PortID(callbackContext)
            outportHandle = get_param([gcb, '/', get_param(gcb, 'SensorType'), '/Out1'], 'PortHandles');
            lineHandle = get_param(outportHandle.Inport, 'Line');
            set_param(lineHandle, 'Name', get_param(gcb, 'SensorType') +"_Port "+ get_param(gcb, 'PortID'));
        end
    end
end