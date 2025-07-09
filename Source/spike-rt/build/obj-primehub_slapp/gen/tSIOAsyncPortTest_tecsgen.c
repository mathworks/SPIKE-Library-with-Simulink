/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSIOAsyncPortTest_tecsgen.h"
#include "tSIOAsyncPortTest_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSIOPort */
struct tag_tSIOAsyncPortTest_eSIOPort_DES {
    const struct tag_sSIOAsyncPort_VMT *vmt;
    int           idx;
};

/* eSIOCBR : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eSIOPort */
void           tSIOAsyncPortTest_eSIOPort_open_skel( const struct tag_sSIOAsyncPort_VDES *epd)
{
    tSIOAsyncPortTest_eSIOPort_open( );
}
void           tSIOAsyncPortTest_eSIOPort_close_skel( const struct tag_sSIOAsyncPort_VDES *epd)
{
    tSIOAsyncPortTest_eSIOPort_close( );
}
void           tSIOAsyncPortTest_eSIOPort_putNotify_skel( const struct tag_sSIOAsyncPort_VDES *epd)
{
    tSIOAsyncPortTest_eSIOPort_putNotify( );
}
void           tSIOAsyncPortTest_eSIOPort_enableCBR_skel( const struct tag_sSIOAsyncPort_VDES *epd, uint_t cbrtn)
{
    tSIOAsyncPortTest_eSIOPort_enableCBR( cbrtn );
}
void           tSIOAsyncPortTest_eSIOPort_disableCBR_skel( const struct tag_sSIOAsyncPort_VDES *epd, uint_t cbrtn)
{
    tSIOAsyncPortTest_eSIOPort_disableCBR( cbrtn );
}
/* eSIOCBR : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSIOPort */
const struct tag_sSIOAsyncPort_VMT tSIOAsyncPortTest_eSIOPort_MT_ = {
    tSIOAsyncPortTest_eSIOPort_open_skel,
    tSIOAsyncPortTest_eSIOPort_close_skel,
    tSIOAsyncPortTest_eSIOPort_putNotify_skel,
    tSIOAsyncPortTest_eSIOPort_enableCBR_skel,
    tSIOAsyncPortTest_eSIOPort_disableCBR_skel,
};
/* eSIOCBR : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tSIOAsyncPortTest_eSIOPort_DES SIOPortTest1_eSIOPort_des;
const struct tag_tSIOAsyncPortTest_eSIOPort_DES SIOPortTest1_eSIOPort_des = {
    &tSIOAsyncPortTest_eSIOPort_MT_,
    0,
};
/* eSIOCBR : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tSIOAsyncPortTest_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
