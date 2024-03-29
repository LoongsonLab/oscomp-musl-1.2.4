static inline uintptr_t __get_tp()
{
	uintptr_t tp;
	__asm__ __volatile__("move %0, $tp" : "=r"(tp));
	return tp;
}

#define TLS_ABOVE_TP
#define GAP_ABOVE_TP   0
#define DTP_OFFSET     0
#define MC_PC          __pc
