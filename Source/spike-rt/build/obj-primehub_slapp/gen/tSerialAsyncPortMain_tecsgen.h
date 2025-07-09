/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSerialAsyncPortMain_TECSGEN_H
#define tSerialAsyncPortMain_TECSGEN_H

/*
 * celltype          :  tSerialAsyncPortMain
 * global name       :  tSerialAsyncPortMain
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSerialPort_tecsgen.h"
#include "snSerialPortManage_tecsgen.h"
#include "sSIOAsyncPort_tecsgen.h"
#include "sSIOAsyncCBR_tecsgen.h"
#include "sSemaphore_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSerialAsyncPortMain_INIB {
    /* call port #_TCP_# */
    struct tag_sSIOAsyncPort_VDES const*cSIOPort; /* TCP_2 */
    const struct tag_tSemaphore_INIB * const cSendSemaphore;  /* TCP_4 */
    const struct tag_tSemaphore_INIB * const cReceiveSemaphore;  /* TCP_4 */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint_t         receiveBufferSize;
    uint_t         sendBufferSize;
    char*          receiveBuffer;
    char*          sendBuffer;
}  tSerialAsyncPortMain_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSerialAsyncPortMain_CB {
    tSerialAsyncPortMain_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    bool_t         openFlag;
    bool_t         errorFlag;
    uint_t         ioControl;
    uint_t         receiveReadPointer;
    uint_t         receiveWritePointer;
    uint_t         receiveCount;
    uint_t         sendReadPointer;
    uint_t         sendWritePointer;
    uint_t         sendCount;
}  tSerialAsyncPortMain_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tSerialAsyncPortMain_CB  tSerialAsyncPortMain_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSerialAsyncPortMain_CB *tSerialAsyncPortMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSerialPort */
ER           tSerialAsyncPortMain_eSerialPort_open(tSerialAsyncPortMain_IDX idx);
ER           tSerialAsyncPortMain_eSerialPort_close(tSerialAsyncPortMain_IDX idx);
ER_UINT      tSerialAsyncPortMain_eSerialPort_read(tSerialAsyncPortMain_IDX idx, char* buffer, uint_t length);
ER_UINT      tSerialAsyncPortMain_eSerialPort_write(tSerialAsyncPortMain_IDX idx, const char* buffer, uint_t length);
ER           tSerialAsyncPortMain_eSerialPort_control(tSerialAsyncPortMain_IDX idx, uint_t ioControl);
ER           tSerialAsyncPortMain_eSerialPort_refer(tSerialAsyncPortMain_IDX idx, T_SERIAL_RPOR* pk_rpor);
/* snSerialPortManage */
bool_t       tSerialAsyncPortMain_enSerialPortManage_getChar(tSerialAsyncPortMain_IDX idx, char* p_char);
/* sSIOAsyncCBR */
ER_UINT      tSerialAsyncPortMain_eSIOCBR_sizeSend(tSerialAsyncPortMain_IDX idx);
ER_UINT      tSerialAsyncPortMain_eSIOCBR_popSend(tSerialAsyncPortMain_IDX idx, char* dst);
ER_UINT      tSerialAsyncPortMain_eSIOCBR_pushReceive(tSerialAsyncPortMain_IDX idx, char src);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSerialAsyncPortMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSemaphore_tecsgen.h"
#ifdef  tSerialAsyncPortMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSerialAsyncPortMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSerialAsyncPortMain_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSerialAsyncPortMain_N_CELL        (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSerialAsyncPortMain_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSerialAsyncPortMain_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSerialAsyncPortMain_ATTR_receiveBufferSize( p_that )	((p_that)->_inib->receiveBufferSize)
#define tSerialAsyncPortMain_ATTR_sendBufferSize( p_that )	((p_that)->_inib->sendBufferSize)

#define tSerialAsyncPortMain_GET_receiveBufferSize(p_that)	((p_that)->_inib->receiveBufferSize)
#define tSerialAsyncPortMain_GET_sendBufferSize(p_that)	((p_that)->_inib->sendBufferSize)


/* var アクセスマクロ #_VAM_# */
#define tSerialAsyncPortMain_VAR_openFlag(p_that)	((p_that)->openFlag)
#define tSerialAsyncPortMain_VAR_errorFlag(p_that)	((p_that)->errorFlag)
#define tSerialAsyncPortMain_VAR_ioControl(p_that)	((p_that)->ioControl)
#define tSerialAsyncPortMain_VAR_receiveBuffer(p_that)	((p_that)->_inib->receiveBuffer)
#define tSerialAsyncPortMain_VAR_receiveReadPointer(p_that)	((p_that)->receiveReadPointer)
#define tSerialAsyncPortMain_VAR_receiveWritePointer(p_that)	((p_that)->receiveWritePointer)
#define tSerialAsyncPortMain_VAR_receiveCount(p_that)	((p_that)->receiveCount)
#define tSerialAsyncPortMain_VAR_sendBuffer(p_that)	((p_that)->_inib->sendBuffer)
#define tSerialAsyncPortMain_VAR_sendReadPointer(p_that)	((p_that)->sendReadPointer)
#define tSerialAsyncPortMain_VAR_sendWritePointer(p_that)	((p_that)->sendWritePointer)
#define tSerialAsyncPortMain_VAR_sendCount(p_that)	((p_that)->sendCount)

#define tSerialAsyncPortMain_GET_openFlag(p_that)	((p_that)->openFlag)
#define tSerialAsyncPortMain_SET_openFlag(p_that,val)	((p_that)->openFlag=(val))
#define tSerialAsyncPortMain_GET_errorFlag(p_that)	((p_that)->errorFlag)
#define tSerialAsyncPortMain_SET_errorFlag(p_that,val)	((p_that)->errorFlag=(val))
#define tSerialAsyncPortMain_GET_ioControl(p_that)	((p_that)->ioControl)
#define tSerialAsyncPortMain_SET_ioControl(p_that,val)	((p_that)->ioControl=(val))
#define tSerialAsyncPortMain_GET_receiveBuffer(p_that)	((p_that)->receiveBuffer)
#define tSerialAsyncPortMain_SET_receiveBuffer(p_that,val)	((p_that)->receiveBuffer=(val))
#define tSerialAsyncPortMain_GET_receiveReadPointer(p_that)	((p_that)->receiveReadPointer)
#define tSerialAsyncPortMain_SET_receiveReadPointer(p_that,val)	((p_that)->receiveReadPointer=(val))
#define tSerialAsyncPortMain_GET_receiveWritePointer(p_that)	((p_that)->receiveWritePointer)
#define tSerialAsyncPortMain_SET_receiveWritePointer(p_that,val)	((p_that)->receiveWritePointer=(val))
#define tSerialAsyncPortMain_GET_receiveCount(p_that)	((p_that)->receiveCount)
#define tSerialAsyncPortMain_SET_receiveCount(p_that,val)	((p_that)->receiveCount=(val))
#define tSerialAsyncPortMain_GET_sendBuffer(p_that)	((p_that)->sendBuffer)
#define tSerialAsyncPortMain_SET_sendBuffer(p_that,val)	((p_that)->sendBuffer=(val))
#define tSerialAsyncPortMain_GET_sendReadPointer(p_that)	((p_that)->sendReadPointer)
#define tSerialAsyncPortMain_SET_sendReadPointer(p_that,val)	((p_that)->sendReadPointer=(val))
#define tSerialAsyncPortMain_GET_sendWritePointer(p_that)	((p_that)->sendWritePointer)
#define tSerialAsyncPortMain_SET_sendWritePointer(p_that,val)	((p_that)->sendWritePointer=(val))
#define tSerialAsyncPortMain_GET_sendCount(p_that)	((p_that)->sendCount)
#define tSerialAsyncPortMain_SET_sendCount(p_that,val)	((p_that)->sendCount=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tSerialAsyncPortMain_cSIOPort_open( p_that ) \
	  (p_that)->_inib->cSIOPort->VMT->open__T( \
	   (p_that)->_inib->cSIOPort )
#define tSerialAsyncPortMain_cSIOPort_close( p_that ) \
	  (p_that)->_inib->cSIOPort->VMT->close__T( \
	   (p_that)->_inib->cSIOPort )
#define tSerialAsyncPortMain_cSIOPort_putNotify( p_that ) \
	  (p_that)->_inib->cSIOPort->VMT->putNotify__T( \
	   (p_that)->_inib->cSIOPort )
#define tSerialAsyncPortMain_cSIOPort_enableCBR( p_that, cbrtn ) \
	  (p_that)->_inib->cSIOPort->VMT->enableCBR__T( \
	   (p_that)->_inib->cSIOPort, (cbrtn) )
#define tSerialAsyncPortMain_cSIOPort_disableCBR( p_that, cbrtn ) \
	  (p_that)->_inib->cSIOPort->VMT->disableCBR__T( \
	   (p_that)->_inib->cSIOPort, (cbrtn) )
#define tSerialAsyncPortMain_cSendSemaphore_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   (p_that)->_inib->cSendSemaphore )
#define tSerialAsyncPortMain_cSendSemaphore_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   (p_that)->_inib->cSendSemaphore )
#define tSerialAsyncPortMain_cSendSemaphore_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   (p_that)->_inib->cSendSemaphore )
#define tSerialAsyncPortMain_cSendSemaphore_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   (p_that)->_inib->cSendSemaphore, (timeout) )
#define tSerialAsyncPortMain_cSendSemaphore_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   (p_that)->_inib->cSendSemaphore )
#define tSerialAsyncPortMain_cSendSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   (p_that)->_inib->cSendSemaphore, (pk_semaphoreStatus) )
#define tSerialAsyncPortMain_cReceiveSemaphore_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   (p_that)->_inib->cReceiveSemaphore )
#define tSerialAsyncPortMain_cReceiveSemaphore_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   (p_that)->_inib->cReceiveSemaphore )
#define tSerialAsyncPortMain_cReceiveSemaphore_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   (p_that)->_inib->cReceiveSemaphore )
#define tSerialAsyncPortMain_cReceiveSemaphore_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   (p_that)->_inib->cReceiveSemaphore, (timeout) )
#define tSerialAsyncPortMain_cReceiveSemaphore_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   (p_that)->_inib->cReceiveSemaphore )
#define tSerialAsyncPortMain_cReceiveSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   (p_that)->_inib->cReceiveSemaphore, (pk_semaphoreStatus) )

#else  /* TECSFLOW */
#define tSerialAsyncPortMain_cSIOPort_open( p_that ) \
	  (p_that)->cSIOPort.open__T( \
 )
#define tSerialAsyncPortMain_cSIOPort_close( p_that ) \
	  (p_that)->cSIOPort.close__T( \
 )
#define tSerialAsyncPortMain_cSIOPort_putNotify( p_that ) \
	  (p_that)->cSIOPort.putNotify__T( \
 )
#define tSerialAsyncPortMain_cSIOPort_enableCBR( p_that, cbrtn ) \
	  (p_that)->cSIOPort.enableCBR__T( \
 (cbrtn) )
#define tSerialAsyncPortMain_cSIOPort_disableCBR( p_that, cbrtn ) \
	  (p_that)->cSIOPort.disableCBR__T( \
 (cbrtn) )
#define tSerialAsyncPortMain_cSendSemaphore_signal( p_that ) \
	  (p_that)->cSendSemaphore.signal__T( \
 )
#define tSerialAsyncPortMain_cSendSemaphore_wait( p_that ) \
	  (p_that)->cSendSemaphore.wait__T( \
 )
#define tSerialAsyncPortMain_cSendSemaphore_waitPolling( p_that ) \
	  (p_that)->cSendSemaphore.waitPolling__T( \
 )
#define tSerialAsyncPortMain_cSendSemaphore_waitTimeout( p_that, timeout ) \
	  (p_that)->cSendSemaphore.waitTimeout__T( \
 (timeout) )
#define tSerialAsyncPortMain_cSendSemaphore_initialize( p_that ) \
	  (p_that)->cSendSemaphore.initialize__T( \
 )
#define tSerialAsyncPortMain_cSendSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  (p_that)->cSendSemaphore.refer__T( \
 (pk_semaphoreStatus) )
#define tSerialAsyncPortMain_cReceiveSemaphore_signal( p_that ) \
	  (p_that)->cReceiveSemaphore.signal__T( \
 )
#define tSerialAsyncPortMain_cReceiveSemaphore_wait( p_that ) \
	  (p_that)->cReceiveSemaphore.wait__T( \
 )
#define tSerialAsyncPortMain_cReceiveSemaphore_waitPolling( p_that ) \
	  (p_that)->cReceiveSemaphore.waitPolling__T( \
 )
#define tSerialAsyncPortMain_cReceiveSemaphore_waitTimeout( p_that, timeout ) \
	  (p_that)->cReceiveSemaphore.waitTimeout__T( \
 (timeout) )
#define tSerialAsyncPortMain_cReceiveSemaphore_initialize( p_that ) \
	  (p_that)->cReceiveSemaphore.initialize__T( \
 )
#define tSerialAsyncPortMain_cReceiveSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  (p_that)->cReceiveSemaphore.refer__T( \
 (pk_semaphoreStatus) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eSerialPort */
ER             tSerialAsyncPortMain_eSerialPort_open_skel( const struct tag_sSerialPort_VDES *epd);
ER             tSerialAsyncPortMain_eSerialPort_close_skel( const struct tag_sSerialPort_VDES *epd);
ER_UINT        tSerialAsyncPortMain_eSerialPort_read_skel( const struct tag_sSerialPort_VDES *epd, char* buffer, uint_t length);
ER_UINT        tSerialAsyncPortMain_eSerialPort_write_skel( const struct tag_sSerialPort_VDES *epd, const char* buffer, uint_t length);
ER             tSerialAsyncPortMain_eSerialPort_control_skel( const struct tag_sSerialPort_VDES *epd, uint_t ioControl);
ER             tSerialAsyncPortMain_eSerialPort_refer_skel( const struct tag_sSerialPort_VDES *epd, T_SERIAL_RPOR* pk_rpor);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSerialAsyncPortMain_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSerialAsyncPortMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSerialAsyncPortMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSerialAsyncPortMain_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_receiveBufferSize tSerialAsyncPortMain_ATTR_receiveBufferSize( p_cellcb )
#define ATTR_sendBufferSize  tSerialAsyncPortMain_ATTR_sendBufferSize( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_openFlag         tSerialAsyncPortMain_VAR_openFlag( p_cellcb )
#define VAR_errorFlag        tSerialAsyncPortMain_VAR_errorFlag( p_cellcb )
#define VAR_ioControl        tSerialAsyncPortMain_VAR_ioControl( p_cellcb )
#define VAR_receiveBuffer    tSerialAsyncPortMain_VAR_receiveBuffer( p_cellcb )
#define VAR_receiveReadPointer tSerialAsyncPortMain_VAR_receiveReadPointer( p_cellcb )
#define VAR_receiveWritePointer tSerialAsyncPortMain_VAR_receiveWritePointer( p_cellcb )
#define VAR_receiveCount     tSerialAsyncPortMain_VAR_receiveCount( p_cellcb )
#define VAR_sendBuffer       tSerialAsyncPortMain_VAR_sendBuffer( p_cellcb )
#define VAR_sendReadPointer  tSerialAsyncPortMain_VAR_sendReadPointer( p_cellcb )
#define VAR_sendWritePointer tSerialAsyncPortMain_VAR_sendWritePointer( p_cellcb )
#define VAR_sendCount        tSerialAsyncPortMain_VAR_sendCount( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSIOPort_open( ) \
          tSerialAsyncPortMain_cSIOPort_open( p_cellcb )
#define cSIOPort_close( ) \
          tSerialAsyncPortMain_cSIOPort_close( p_cellcb )
#define cSIOPort_putNotify( ) \
          tSerialAsyncPortMain_cSIOPort_putNotify( p_cellcb )
#define cSIOPort_enableCBR( cbrtn ) \
          tSerialAsyncPortMain_cSIOPort_enableCBR( p_cellcb, cbrtn )
#define cSIOPort_disableCBR( cbrtn ) \
          tSerialAsyncPortMain_cSIOPort_disableCBR( p_cellcb, cbrtn )
#define cSendSemaphore_signal( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cSendSemaphore_signal( p_cellcb ))
#define cSendSemaphore_wait( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cSendSemaphore_wait( p_cellcb ))
#define cSendSemaphore_waitPolling( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cSendSemaphore_waitPolling( p_cellcb ))
#define cSendSemaphore_waitTimeout( timeout ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cSendSemaphore_waitTimeout( p_cellcb, timeout ))
#define cSendSemaphore_initialize( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cSendSemaphore_initialize( p_cellcb ))
#define cSendSemaphore_refer( pk_semaphoreStatus ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cSendSemaphore_refer( p_cellcb, pk_semaphoreStatus ))
#define cReceiveSemaphore_signal( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cReceiveSemaphore_signal( p_cellcb ))
#define cReceiveSemaphore_wait( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cReceiveSemaphore_wait( p_cellcb ))
#define cReceiveSemaphore_waitPolling( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cReceiveSemaphore_waitPolling( p_cellcb ))
#define cReceiveSemaphore_waitTimeout( timeout ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cReceiveSemaphore_waitTimeout( p_cellcb, timeout ))
#define cReceiveSemaphore_initialize( ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cReceiveSemaphore_initialize( p_cellcb ))
#define cReceiveSemaphore_refer( pk_semaphoreStatus ) \
          ((void)p_cellcb, tSerialAsyncPortMain_cReceiveSemaphore_refer( p_cellcb, pk_semaphoreStatus ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSerialPort_open tSerialAsyncPortMain_eSerialPort_open
#define eSerialPort_close tSerialAsyncPortMain_eSerialPort_close
#define eSerialPort_read tSerialAsyncPortMain_eSerialPort_read
#define eSerialPort_write tSerialAsyncPortMain_eSerialPort_write
#define eSerialPort_control tSerialAsyncPortMain_eSerialPort_control
#define eSerialPort_refer tSerialAsyncPortMain_eSerialPort_refer
#define enSerialPortManage_getChar tSerialAsyncPortMain_enSerialPortManage_getChar
#define eSIOCBR_sizeSend tSerialAsyncPortMain_eSIOCBR_sizeSend
#define eSIOCBR_popSend  tSerialAsyncPortMain_eSIOCBR_popSend
#define eSIOCBR_pushReceive tSerialAsyncPortMain_eSIOCBR_pushReceive

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSerialAsyncPortMain_N_CELL; (i)++ ){ \
       (p_cb) = &tSerialAsyncPortMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->openFlag = false;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tSerialAsyncPortMain_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSerialAsyncPortMain_TECSGENH */
