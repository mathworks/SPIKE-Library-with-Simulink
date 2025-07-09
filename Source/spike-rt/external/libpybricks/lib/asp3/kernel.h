#ifndef ASP3_KERNEL_H
#define ASP3_KERNEL_H

typedef signed int		int_t;		/* 自然なサイズの符号付き整数 */
typedef unsigned int	uint_t;		/* 自然なサイズの符号無し整数 */

typedef	int_t			ER;			/* エラーコード */
typedef	uint_t		INTNO;		/* 割込み番号 */

extern ER		dis_int(INTNO intno);
extern ER		ena_int(INTNO intno);

#endif /* ASP3_KERNEL_H */
