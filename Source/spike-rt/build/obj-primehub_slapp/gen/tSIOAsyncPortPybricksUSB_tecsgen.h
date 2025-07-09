/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSIOAsyncPortPybricksUSB_TECSGEN_H
#define tSIOAsyncPortPybricksUSB_TECSGEN_H

/*
 * celltype          :  tSIOAsyncPortPybricksUSB
 * global name       :  tSIOAsyncPortPybricksUSB
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSIOAsyncPort_tecsgen.h"
#include "sSIOAsyncCBR_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tSIOAsyncPortPybricksUSB_CB {
    int  dummy;
} tSIOAsyncPortPybricksUSB_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tSIOAsyncPortPybricksUSB_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSIOAsyncPort */
void         tSIOAsyncPortPybricksUSB_eSIOPort_open();
void         tSIOAsyncPortPybricksUSB_eSIOPort_close();
void         tSIOAsyncPortPybricksUSB_eSIOPort_putNotify();
void         tSIOAsyncPortPybricksUSB_eSIOPort_enableCBR( uint_t cbrtn);
void         tSIOAsyncPortPybricksUSB_eSIOPort_disableCBR( uint_t cbrtn);
/* sSIOAsyncCBR */
ER_UINT      tSIOAsyncPortPybricksUSB_eSIOCBR_sizeSend();
ER_UINT      tSIOAsyncPortPybricksUSB_eSIOCBR_popSend( char* dst);
ER_UINT      tSIOAsyncPortPybricksUSB_eSIOCBR_pushReceive( char src);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSIOAsyncPortPybricksUSB_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSerialAsyncPortMain_tecsgen.h"
#ifdef  tSIOAsyncPortPybricksUSB_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSIOAsyncPortPybricksUSB_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSIOAsyncPortPybricksUSB_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tSIOAsyncPortPybricksUSB_cSIOCBR_sizeSend( ) \
	  tSerialAsyncPortMain_eSIOCBR_sizeSend( \
	   &tSerialAsyncPortMain_CB_tab[0] )
#define tSIOAsyncPortPybricksUSB_cSIOCBR_popSend( dst ) \
	  tSerialAsyncPortMain_eSIOCBR_popSend( \
	   &tSerialAsyncPortMain_CB_tab[0], (dst) )
#define tSIOAsyncPortPybricksUSB_cSIOCBR_pushReceive( src ) \
	  tSerialAsyncPortMain_eSIOCBR_pushReceive( \
	   &tSerialAsyncPortMain_CB_tab[0], (src) )

#else  /* TECSFLOW */
#define tSIOAsyncPortPybricksUSB_cSIOCBR_sizeSend( ) \
	  (p_that)->cSIOCBR.sizeSend__T( \
 )
#define tSIOAsyncPortPybricksUSB_cSIOCBR_popSend( dst ) \
	  (p_that)->cSIOCBR.popSend__T( \
 (dst) )
#define tSIOAsyncPortPybricksUSB_cSIOCBR_pushReceive( src ) \
	  (p_that)->cSIOCBR.pushReceive__T( \
 (src) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eSIOPort */
void           tSIOAsyncPortPybricksUSB_eSIOPort_open_skel( const struct tag_sSIOAsyncPort_VDES *epd);
void           tSIOAsyncPortPybricksUSB_eSIOPort_close_skel( const struct tag_sSIOAsyncPort_VDES *epd);
void           tSIOAsyncPortPybricksUSB_eSIOPort_putNotify_skel( const struct tag_sSIOAsyncPort_VDES *epd);
void           tSIOAsyncPortPybricksUSB_eSIOPort_enableCBR_skel( const struct tag_sSIOAsyncPort_VDES *epd, uint_t cbrtn);
void           tSIOAsyncPortPybricksUSB_eSIOPort_disableCBR_skel( const struct tag_sSIOAsyncPort_VDES *epd, uint_t cbrtn);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSIOAsyncPortPybricksUSB_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSIOAsyncPortPybricksUSB_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSIOAsyncPortPybricksUSB_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSIOCBR_sizeSend( ) \
          tSIOAsyncPortPybricksUSB_cSIOCBR_sizeSend( )
#define cSIOCBR_popSend( dst ) \
          tSIOAsyncPortPybricksUSB_cSIOCBR_popSend( dst )
#define cSIOCBR_pushReceive( src ) \
          tSIOAsyncPortPybricksUSB_cSIOCBR_pushReceive( src )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSIOPort_open    tSIOAsyncPortPybricksUSB_eSIOPort_open
#define eSIOPort_close   tSIOAsyncPortPybricksUSB_eSIOPort_close
#define eSIOPort_putNotify tSIOAsyncPortPybricksUSB_eSIOPort_putNotify
#define eSIOPort_enableCBR tSIOAsyncPortPybricksUSB_eSIOPort_enableCBR
#define eSIOPort_disableCBR tSIOAsyncPortPybricksUSB_eSIOPort_disableCBR
#define eSIOCBR_sizeSend tSIOAsyncPortPybricksUSB_eSIOCBR_sizeSend
#define eSIOCBR_popSend  tSIOAsyncPortPybricksUSB_eSIOCBR_popSend
#define eSIOCBR_pushReceive tSIOAsyncPortPybricksUSB_eSIOCBR_pushReceive

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSIOAsyncPortPybricksUSB_TECSGENH */
