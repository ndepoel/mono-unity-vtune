static void
wasm_invoke_v (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(void) = target_func;

	func ();

}

static void
wasm_invoke_vi (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0) = target_func;

	func ((int)margs->iargs [0]);

}

static void
wasm_invoke_vii (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, int arg_1) = target_func;

	func ((int)margs->iargs [0], (int)margs->iargs [1]);

}

static void
wasm_invoke_viii (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, int arg_1, int arg_2) = target_func;

	func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2]);

}

static void
wasm_invoke_viiii (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, int arg_1, int arg_2, int arg_3) = target_func;

	func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3]);

}

static void
wasm_invoke_viiiii (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) = target_func;

	func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3], (int)margs->iargs [4]);

}

static void
wasm_invoke_viiiiii (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) = target_func;

	func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3], (int)margs->iargs [4], (int)margs->iargs [5]);

}

static void
wasm_invoke_i (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(void) = target_func;

	int res = func ();
	*(int*)margs->retval = res;

}

static void
wasm_invoke_ii (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0) = target_func;

	int res = func ((int)margs->iargs [0]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iii (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, int arg_1) = target_func;

	int res = func ((int)margs->iargs [0], (int)margs->iargs [1]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iiii (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, int arg_1, int arg_2) = target_func;

	int res = func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iiiii (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, int arg_1, int arg_2, int arg_3) = target_func;

	int res = func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iiiiii (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) = target_func;

	int res = func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3], (int)margs->iargs [4]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iiiiiii (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) = target_func;

	int res = func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3], (int)margs->iargs [4], (int)margs->iargs [5]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iiiiiiiii (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) = target_func;

	int res = func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3], (int)margs->iargs [4], (int)margs->iargs [5], (int)margs->iargs [6], (int)margs->iargs [7]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_l (void *target_func, InterpMethodArguments *margs)
{
	gint64 (*func)(void) = target_func;

	gint64 res = func ();
	*(gint64*)margs->retval = res;

}

static void
wasm_invoke_ll (void *target_func, InterpMethodArguments *margs)
{
	gint64 (*func)(gint64 arg_0) = target_func;

	gint64 res = func (get_long_arg (margs, 0));
	*(gint64*)margs->retval = res;

}

static void
wasm_invoke_li (void *target_func, InterpMethodArguments *margs)
{
	gint64 (*func)(int arg_0) = target_func;

	gint64 res = func ((int)margs->iargs [0]);
	*(gint64*)margs->retval = res;

}

static void
wasm_invoke_lil (void *target_func, InterpMethodArguments *margs)
{
	gint64 (*func)(int arg_0, gint64 arg_1) = target_func;

	gint64 res = func ((int)margs->iargs [0], get_long_arg (margs, 1));
	*(gint64*)margs->retval = res;

}

static void
wasm_invoke_lilii (void *target_func, InterpMethodArguments *margs)
{
	gint64 (*func)(int arg_0, gint64 arg_1, int arg_2, int arg_3) = target_func;

	gint64 res = func ((int)margs->iargs [0], get_long_arg (margs, 1), (int)margs->iargs [3], (int)margs->iargs [4]);
	*(gint64*)margs->retval = res;

}

static void
wasm_invoke_dd (void *target_func, InterpMethodArguments *margs)
{
	double (*func)(double arg_0) = target_func;

	double res = func (margs->fargs [FIDX (0)]);
	*(double*)margs->retval = res;

}

static void
wasm_invoke_ddd (void *target_func, InterpMethodArguments *margs)
{
	double (*func)(double arg_0, double arg_1) = target_func;

	double res = func (margs->fargs [FIDX (0)], margs->fargs [FIDX (1)]);
	*(double*)margs->retval = res;

}

static void
wasm_invoke_vif (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, float arg_1) = target_func;

	func ((int)margs->iargs [0], *(float*)&margs->fargs [FIDX (0)]);

}

static void
wasm_invoke_viff (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, float arg_1, float arg_2) = target_func;

	func ((int)margs->iargs [0], *(float*)&margs->fargs [FIDX (0)], *(float*)&margs->fargs [FIDX (1)]);

}

static void
wasm_invoke_viffff (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, float arg_1, float arg_2, float arg_3, float arg_4) = target_func;

	func ((int)margs->iargs [0], *(float*)&margs->fargs [FIDX (0)], *(float*)&margs->fargs [FIDX (1)], *(float*)&margs->fargs [FIDX (2)], *(float*)&margs->fargs [FIDX (3)]);

}

static void
wasm_invoke_vifffffi (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, float arg_1, float arg_2, float arg_3, float arg_4, float arg_5, int arg_6) = target_func;

	func ((int)margs->iargs [0], *(float*)&margs->fargs [FIDX (0)], *(float*)&margs->fargs [FIDX (1)], *(float*)&margs->fargs [FIDX (2)], *(float*)&margs->fargs [FIDX (3)], *(float*)&margs->fargs [FIDX (4)], (int)margs->iargs [1]);

}

static void
wasm_invoke_ff (void *target_func, InterpMethodArguments *margs)
{
	float (*func)(float arg_0) = target_func;

	float res = func (*(float*)&margs->fargs [FIDX (0)]);
	*(float*)margs->retval = res;

}

static void
wasm_invoke_di (void *target_func, InterpMethodArguments *margs)
{
	double (*func)(int arg_0) = target_func;

	double res = func ((int)margs->iargs [0]);
	*(double*)margs->retval = res;

}

static void
wasm_invoke_fi (void *target_func, InterpMethodArguments *margs)
{
	float (*func)(int arg_0) = target_func;

	float res = func ((int)margs->iargs [0]);
	*(float*)margs->retval = res;

}

static void
wasm_invoke_iil (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, gint64 arg_1) = target_func;

	int res = func ((int)margs->iargs [0], get_long_arg (margs, 1));
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iili (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, gint64 arg_1, int arg_2) = target_func;

	int res = func ((int)margs->iargs [0], get_long_arg (margs, 1), (int)margs->iargs [3]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_iillli (void *target_func, InterpMethodArguments *margs)
{
	int (*func)(int arg_0, gint64 arg_1, gint64 arg_2, gint64 arg_3, int arg_4) = target_func;

	int res = func ((int)margs->iargs [0], get_long_arg (margs, 1), get_long_arg (margs, 3), get_long_arg (margs, 5), (int)margs->iargs [7]);
	*(int*)margs->retval = res;

}

static void
wasm_invoke_lii (void *target_func, InterpMethodArguments *margs)
{
	gint64 (*func)(int arg_0, int arg_1) = target_func;

	gint64 res = func ((int)margs->iargs [0], (int)margs->iargs [1]);
	*(gint64*)margs->retval = res;

}

static void
wasm_invoke_vid (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, double arg_1) = target_func;

	func ((int)margs->iargs [0], margs->fargs [FIDX (0)]);

}

static void
wasm_invoke_viiiiiii (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) = target_func;

	func ((int)margs->iargs [0], (int)margs->iargs [1], (int)margs->iargs [2], (int)margs->iargs [3], (int)margs->iargs [4], (int)margs->iargs [5], (int)margs->iargs [6]);

}

static void
wasm_invoke_villi (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, gint64 arg_1, gint64 arg_2, int arg_3) = target_func;

	func ((int)margs->iargs [0], get_long_arg (margs, 1), get_long_arg (margs, 3), (int)margs->iargs [5]);

}

static void
wasm_invoke_did (void *target_func, InterpMethodArguments *margs)
{
	double (*func)(int arg_0, double arg_1) = target_func;

	double res = func ((int)margs->iargs [0], margs->fargs [FIDX (0)]);
	*(double*)margs->retval = res;

}

static void
wasm_invoke_didd (void *target_func, InterpMethodArguments *margs)
{
	double (*func)(int arg_0, double arg_1, double arg_2) = target_func;

	double res = func ((int)margs->iargs [0], margs->fargs [FIDX (0)], margs->fargs [FIDX (1)]);
	*(double*)margs->retval = res;

}

static void
wasm_invoke_fif (void *target_func, InterpMethodArguments *margs)
{
	float (*func)(int arg_0, float arg_1) = target_func;

	float res = func ((int)margs->iargs [0], *(float*)&margs->fargs [FIDX (0)]);
	*(float*)margs->retval = res;

}

static void
wasm_invoke_fiff (void *target_func, InterpMethodArguments *margs)
{
	float (*func)(int arg_0, float arg_1, float arg_2) = target_func;

	float res = func ((int)margs->iargs [0], *(float*)&margs->fargs [FIDX (0)], *(float*)&margs->fargs [FIDX (1)]);
	*(float*)margs->retval = res;

}

static void
wasm_invoke_lill (void *target_func, InterpMethodArguments *margs)
{
	gint64 (*func)(int arg_0, gint64 arg_1, gint64 arg_2) = target_func;

	gint64 res = func ((int)margs->iargs [0], get_long_arg (margs, 1), get_long_arg (margs, 3));
	*(gint64*)margs->retval = res;

}

static void
wasm_invoke_vil (void *target_func, InterpMethodArguments *margs)
{
	void (*func)(int arg_0, gint64 arg_1) = target_func;

	func ((int)margs->iargs [0], get_long_arg (margs, 1));

}

static void
icall_trampoline_dispatch (const char *cookie, void *target_func, InterpMethodArguments *margs)
{
	if (!strcmp ("V", cookie))
		wasm_invoke_v (target_func, margs);
	else if (!strcmp ("VI", cookie))
		wasm_invoke_vi (target_func, margs);
	else if (!strcmp ("VII", cookie))
		wasm_invoke_vii (target_func, margs);
	else if (!strcmp ("VIII", cookie))
		wasm_invoke_viii (target_func, margs);
	else if (!strcmp ("VIIII", cookie))
		wasm_invoke_viiii (target_func, margs);
	else if (!strcmp ("VIIIII", cookie))
		wasm_invoke_viiiii (target_func, margs);
	else if (!strcmp ("VIIIIII", cookie))
		wasm_invoke_viiiiii (target_func, margs);
	else if (!strcmp ("I", cookie))
		wasm_invoke_i (target_func, margs);
	else if (!strcmp ("II", cookie))
		wasm_invoke_ii (target_func, margs);
	else if (!strcmp ("III", cookie))
		wasm_invoke_iii (target_func, margs);
	else if (!strcmp ("IIII", cookie))
		wasm_invoke_iiii (target_func, margs);
	else if (!strcmp ("IIIII", cookie))
		wasm_invoke_iiiii (target_func, margs);
	else if (!strcmp ("IIIIII", cookie))
		wasm_invoke_iiiiii (target_func, margs);
	else if (!strcmp ("IIIIIII", cookie))
		wasm_invoke_iiiiiii (target_func, margs);
	else if (!strcmp ("IIIIIIIII", cookie))
		wasm_invoke_iiiiiiiii (target_func, margs);
	else if (!strcmp ("L", cookie))
		wasm_invoke_l (target_func, margs);
	else if (!strcmp ("LL", cookie))
		wasm_invoke_ll (target_func, margs);
	else if (!strcmp ("LI", cookie))
		wasm_invoke_li (target_func, margs);
	else if (!strcmp ("LIL", cookie))
		wasm_invoke_lil (target_func, margs);
	else if (!strcmp ("LILII", cookie))
		wasm_invoke_lilii (target_func, margs);
	else if (!strcmp ("DD", cookie))
		wasm_invoke_dd (target_func, margs);
	else if (!strcmp ("DDD", cookie))
		wasm_invoke_ddd (target_func, margs);
	else if (!strcmp ("VIF", cookie))
		wasm_invoke_vif (target_func, margs);
	else if (!strcmp ("VIFF", cookie))
		wasm_invoke_viff (target_func, margs);
	else if (!strcmp ("VIFFFF", cookie))
		wasm_invoke_viffff (target_func, margs);
	else if (!strcmp ("VIFFFFFI", cookie))
		wasm_invoke_vifffffi (target_func, margs);
	else if (!strcmp ("FF", cookie))
		wasm_invoke_ff (target_func, margs);
	else if (!strcmp ("DI", cookie))
		wasm_invoke_di (target_func, margs);
	else if (!strcmp ("FI", cookie))
		wasm_invoke_fi (target_func, margs);
	else if (!strcmp ("IIL", cookie))
		wasm_invoke_iil (target_func, margs);
	else if (!strcmp ("IILI", cookie))
		wasm_invoke_iili (target_func, margs);
	else if (!strcmp ("IILLLI", cookie))
		wasm_invoke_iillli (target_func, margs);
	else if (!strcmp ("LII", cookie))
		wasm_invoke_lii (target_func, margs);
	else if (!strcmp ("VID", cookie))
		wasm_invoke_vid (target_func, margs);
	else if (!strcmp ("VIIIIIII", cookie))
		wasm_invoke_viiiiiii (target_func, margs);
	else if (!strcmp ("VILLI", cookie))
		wasm_invoke_villi (target_func, margs);
	else if (!strcmp ("DID", cookie))
		wasm_invoke_did (target_func, margs);
	else if (!strcmp ("DIDD", cookie))
		wasm_invoke_didd (target_func, margs);
	else if (!strcmp ("FIF", cookie))
		wasm_invoke_fif (target_func, margs);
	else if (!strcmp ("FIFF", cookie))
		wasm_invoke_fiff (target_func, margs);
	else if (!strcmp ("LILL", cookie))
		wasm_invoke_lill (target_func, margs);
	else if (!strcmp ("VIL", cookie))
		wasm_invoke_vil (target_func, margs);
	else {
		printf ("CANNOT HANDLE COOKIE %s\n", cookie);
		g_assert (0);
	}
}
