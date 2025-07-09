/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSIOAsyncPort_TECSGEN_H
#define sSIOAsyncPort_TECSGEN_H

/*
 * signature   :  sSIOAsyncPort
 * global name :  sSIOAsyncPort
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSIOAsyncPort_VDES {
    struct tag_sSIOAsyncPort_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSIOAsyncPort_VMT {
    void           (*open__T)( const struct tag_sSIOAsyncPort_VDES *edp );
    void           (*close__T)( const struct tag_sSIOAsyncPort_VDES *edp );
    void           (*putNotify__T)( const struct tag_sSIOAsyncPort_VDES *edp );
    void           (*enableCBR__T)( const struct tag_sSIOAsyncPort_VDES *edp, uint_t cbrtn );
    void           (*disableCBR__T)( const struct tag_sSIOAsyncPort_VDES *edp, uint_t cbrtn );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSIOAsyncPort_Defined
#define  Descriptor_of_sSIOAsyncPort_Defined
typedef struct { struct tag_sSIOAsyncPort_VDES *vdes; } Descriptor( sSIOAsyncPort );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIOASYNCPORT_OPEN              (1)
#define	FUNCID_SSIOASYNCPORT_CLOSE             (2)
#define	FUNCID_SSIOASYNCPORT_PUTNOTIFY         (3)
#define	FUNCID_SSIOASYNCPORT_ENABLECBR         (4)
#define	FUNCID_SSIOASYNCPORT_DISABLECBR        (5)

#endif /* sSIOAsyncPort_TECSGEN_H */
