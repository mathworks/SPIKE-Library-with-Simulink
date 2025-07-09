/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSIOAsyncPortTest_templ.c => src/tSIOAsyncPortTest.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cSIOCBR signature: sSIOAsyncCBR context:task
 *   ER_UINT        cSIOCBR_sizeSend( );
 *   ER_UINT        cSIOCBR_popSend( char* dst );
 *   ER_UINT        cSIOCBR_pushReceive( char src );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSIOAsyncPortTest_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSIOPort
 * entry port: eSIOPort
 * signature:  sSIOAsyncPort
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSIOPort_open
 * name:         eSIOPort_open
 * global_name:  tSIOAsyncPortTest_eSIOPort_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_open()
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_close
 * name:         eSIOPort_close
 * global_name:  tSIOAsyncPortTest_eSIOPort_close
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_close()
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_putNotify
 * name:         eSIOPort_putNotify
 * global_name:  tSIOAsyncPortTest_eSIOPort_putNotify
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_putNotify()
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_enableCBR
 * name:         eSIOPort_enableCBR
 * global_name:  tSIOAsyncPortTest_eSIOPort_enableCBR
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_enableCBR(uint_t cbrtn)
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_disableCBR
 * name:         eSIOPort_disableCBR
 * global_name:  tSIOAsyncPortTest_eSIOPort_disableCBR
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_disableCBR(uint_t cbrtn)
{
}

/* #[<ENTRY_PORT>]# eSIOCBR
 * entry port: eSIOCBR
 * signature:  sSIOAsyncCBR
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSIOCBR_sizeSend
 * name:         eSIOCBR_sizeSend
 * global_name:  tSIOAsyncPortTest_eSIOCBR_sizeSend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_sizeSend()
{
}

/* #[<ENTRY_FUNC>]# eSIOCBR_popSend
 * name:         eSIOCBR_popSend
 * global_name:  tSIOAsyncPortTest_eSIOCBR_popSend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_popSend(char* dst)
{
}

/* #[<ENTRY_FUNC>]# eSIOCBR_pushReceive
 * name:         eSIOCBR_pushReceive
 * global_name:  tSIOAsyncPortTest_eSIOCBR_pushReceive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_pushReceive(char src)
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
