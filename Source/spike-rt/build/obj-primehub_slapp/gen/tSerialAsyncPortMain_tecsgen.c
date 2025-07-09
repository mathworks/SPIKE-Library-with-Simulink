/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSerialAsyncPortMain_tecsgen.h"
#include "tSerialAsyncPortMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSerialPort */
struct tag_tSerialAsyncPortMain_eSerialPort_DES {
    const struct tag_sSerialPort_VMT *vmt;
    tSerialAsyncPortMain_IDX  idx;
};

/* enSerialPortManage : omitted by entry port optimize */

/* eSIOCBR : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eSerialPort */
ER             tSerialAsyncPortMain_eSerialPort_open_skel( const struct tag_sSerialPort_VDES *epd)
{
    struct tag_tSerialAsyncPortMain_eSerialPort_DES *lepd
        = (struct tag_tSerialAsyncPortMain_eSerialPort_DES *)epd;
    return tSerialAsyncPortMain_eSerialPort_open( lepd->idx );
}
ER             tSerialAsyncPortMain_eSerialPort_close_skel( const struct tag_sSerialPort_VDES *epd)
{
    struct tag_tSerialAsyncPortMain_eSerialPort_DES *lepd
        = (struct tag_tSerialAsyncPortMain_eSerialPort_DES *)epd;
    return tSerialAsyncPortMain_eSerialPort_close( lepd->idx );
}
ER_UINT        tSerialAsyncPortMain_eSerialPort_read_skel( const struct tag_sSerialPort_VDES *epd, char* buffer, uint_t length)
{
    struct tag_tSerialAsyncPortMain_eSerialPort_DES *lepd
        = (struct tag_tSerialAsyncPortMain_eSerialPort_DES *)epd;
    return tSerialAsyncPortMain_eSerialPort_read( lepd->idx, buffer, length );
}
ER_UINT        tSerialAsyncPortMain_eSerialPort_write_skel( const struct tag_sSerialPort_VDES *epd, const char* buffer, uint_t length)
{
    struct tag_tSerialAsyncPortMain_eSerialPort_DES *lepd
        = (struct tag_tSerialAsyncPortMain_eSerialPort_DES *)epd;
    return tSerialAsyncPortMain_eSerialPort_write( lepd->idx, buffer, length );
}
ER             tSerialAsyncPortMain_eSerialPort_control_skel( const struct tag_sSerialPort_VDES *epd, uint_t ioControl)
{
    struct tag_tSerialAsyncPortMain_eSerialPort_DES *lepd
        = (struct tag_tSerialAsyncPortMain_eSerialPort_DES *)epd;
    return tSerialAsyncPortMain_eSerialPort_control( lepd->idx, ioControl );
}
ER             tSerialAsyncPortMain_eSerialPort_refer_skel( const struct tag_sSerialPort_VDES *epd, T_SERIAL_RPOR* pk_rpor)
{
    struct tag_tSerialAsyncPortMain_eSerialPort_DES *lepd
        = (struct tag_tSerialAsyncPortMain_eSerialPort_DES *)epd;
    return tSerialAsyncPortMain_eSerialPort_refer( lepd->idx, pk_rpor );
}
/* enSerialPortManage : omitted by entry port optimize */
/* eSIOCBR : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSerialPort */
const struct tag_sSerialPort_VMT tSerialAsyncPortMain_eSerialPort_MT_ = {
    tSerialAsyncPortMain_eSerialPort_open_skel,
    tSerialAsyncPortMain_eSerialPort_close_skel,
    tSerialAsyncPortMain_eSerialPort_read_skel,
    tSerialAsyncPortMain_eSerialPort_write_skel,
    tSerialAsyncPortMain_eSerialPort_control_skel,
    tSerialAsyncPortMain_eSerialPort_refer_skel,
};
/* enSerialPortManage : omitted by entry port optimize */
/* eSIOCBR : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSemaphore_VDES SerialPortUSB1_ReceiveSemaphore_eSemaphore_des;
extern struct tag_sSemaphore_VDES SerialPortUSB1_SendSemaphore_eSemaphore_des;
extern struct tag_sSIOAsyncPort_VDES SIOPortPybricksUSB1_eSIOPort_des;

extern struct tag_sSemaphore_VDES SerialPortBluetooth1_ReceiveSemaphore_eSemaphore_des;
extern struct tag_sSemaphore_VDES SerialPortBluetooth1_SendSemaphore_eSemaphore_des;
extern struct tag_sSIOAsyncPort_VDES SIOPortPybricksBluetooth1_eSIOPort_des;

extern struct tag_sSemaphore_VDES SerialPortTest1_ReceiveSemaphore_eSemaphore_des;
extern struct tag_sSemaphore_VDES SerialPortTest1_SendSemaphore_eSemaphore_des;
extern struct tag_sSIOAsyncPort_VDES SIOPortTest1_eSIOPort_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
char tSerialAsyncPortMain_SerialPortUSB1_SerialPortMain_CB_receiveBuffer_INIT[256];
char tSerialAsyncPortMain_SerialPortUSB1_SerialPortMain_CB_sendBuffer_INIT[256];
char tSerialAsyncPortMain_SerialPortBluetooth1_SerialPortMain_CB_receiveBuffer_INIT[256];
char tSerialAsyncPortMain_SerialPortBluetooth1_SerialPortMain_CB_sendBuffer_INIT[256];
char tSerialAsyncPortMain_SerialPortTest1_SerialPortMain_CB_receiveBuffer_INIT[10];
char tSerialAsyncPortMain_SerialPortTest1_SerialPortMain_CB_sendBuffer_INIT[10];
/* セル INIB #_INIB_# */
tSerialAsyncPortMain_INIB tSerialAsyncPortMain_INIB_tab[] = {
    /* cell: tSerialAsyncPortMain_CB_tab[0]:  SerialPortUSB1_SerialPortMain id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &SIOPortPybricksUSB1_eSIOPort_des,       /* cSIOPort #_CCP1_# */
        &tSemaphore_INIB_tab[3],                 /* cSendSemaphore #_CCP2_# */
        &tSemaphore_INIB_tab[2],                 /* cReceiveSemaphore #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        256,                                     /* receiveBufferSize */
        256,                                     /* sendBufferSize */
        tSerialAsyncPortMain_SerialPortUSB1_SerialPortMain_CB_receiveBuffer_INIT, /* receiveBuffer */
        tSerialAsyncPortMain_SerialPortUSB1_SerialPortMain_CB_sendBuffer_INIT, /* sendBuffer */
    },
    /* cell: tSerialAsyncPortMain_CB_tab[1]:  SerialPortBluetooth1_SerialPortMain id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &SIOPortPybricksBluetooth1_eSIOPort_des, /* cSIOPort #_CCP1_# */
        &tSemaphore_INIB_tab[5],                 /* cSendSemaphore #_CCP2_# */
        &tSemaphore_INIB_tab[4],                 /* cReceiveSemaphore #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        256,                                     /* receiveBufferSize */
        256,                                     /* sendBufferSize */
        tSerialAsyncPortMain_SerialPortBluetooth1_SerialPortMain_CB_receiveBuffer_INIT, /* receiveBuffer */
        tSerialAsyncPortMain_SerialPortBluetooth1_SerialPortMain_CB_sendBuffer_INIT, /* sendBuffer */
    },
    /* cell: tSerialAsyncPortMain_CB_tab[2]:  SerialPortTest1_SerialPortMain id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &SIOPortTest1_eSIOPort_des,              /* cSIOPort #_CCP1_# */
        &tSemaphore_INIB_tab[7],                 /* cSendSemaphore #_CCP2_# */
        &tSemaphore_INIB_tab[6],                 /* cReceiveSemaphore #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        10,                                      /* receiveBufferSize */
        10,                                      /* sendBufferSize */
        tSerialAsyncPortMain_SerialPortTest1_SerialPortMain_CB_receiveBuffer_INIT, /* receiveBuffer */
        tSerialAsyncPortMain_SerialPortTest1_SerialPortMain_CB_sendBuffer_INIT, /* sendBuffer */
    },
};

/* セル CB #_CB_# */
struct tag_tSerialAsyncPortMain_CB tSerialAsyncPortMain_CB_tab[3];
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSerialAsyncPortMain_eSerialPort_DES SerialPortUSB1_SerialPortMain_eSerialPort_des;
const struct tag_tSerialAsyncPortMain_eSerialPort_DES SerialPortUSB1_SerialPortMain_eSerialPort_des = {
    &tSerialAsyncPortMain_eSerialPort_MT_,
    &tSerialAsyncPortMain_CB_tab[0],      /* CB 3 */
};
/* enSerialPortManage : omitted by entry port optimize */
/* eSIOCBR : omitted by entry port optimize */
extern const struct tag_tSerialAsyncPortMain_eSerialPort_DES SerialPortBluetooth1_SerialPortMain_eSerialPort_des;
const struct tag_tSerialAsyncPortMain_eSerialPort_DES SerialPortBluetooth1_SerialPortMain_eSerialPort_des = {
    &tSerialAsyncPortMain_eSerialPort_MT_,
    &tSerialAsyncPortMain_CB_tab[1],      /* CB 3 */
};
/* enSerialPortManage : omitted by entry port optimize */
/* eSIOCBR : omitted by entry port optimize */
extern const struct tag_tSerialAsyncPortMain_eSerialPort_DES SerialPortTest1_SerialPortMain_eSerialPort_des;
const struct tag_tSerialAsyncPortMain_eSerialPort_DES SerialPortTest1_SerialPortMain_eSerialPort_des = {
    &tSerialAsyncPortMain_eSerialPort_MT_,
    &tSerialAsyncPortMain_CB_tab[2],      /* CB 3 */
};
/* enSerialPortManage : omitted by entry port optimize */
/* eSIOCBR : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tSerialAsyncPortMain_CB_initialize()
{
    tSerialAsyncPortMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
