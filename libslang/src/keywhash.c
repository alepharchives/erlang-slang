/* Perfect hash generated by command line:
 * ./a.out 1
 */
#define MIN_HASH_VALUE	2
#define MAX_HASH_VALUE	118
#define MIN_KEYWORD_LEN 2
#define MAX_KEYWORD_LEN 11

static SLCONST unsigned char Keyword_Hash_Table [256] =
{
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119,   1, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
    9,   7,   1,   8,   2, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119,   0,   0, 119,   0, 119, 119, 119,   7, 119,   0,   0, 119, 119,   0, 
  119, 119,   0,   0,   0,   0, 119, 119,   0, 119, 119, 119, 119, 119, 119,   2, 
  119,  41,   1,   1,   9,   0,  55,   8,   0,   0, 119,   0,  27,   0,   0,   0, 
    7,   2,   0,  21,   0,   0,   0,   3,   2,   0, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 
  119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119
};

static unsigned char keyword_hash (char *s, unsigned int len)
{
   unsigned int sum;

   sum = len;
   while (len)
     {
	len--;
	sum += (unsigned int) Keyword_Hash_Table [(unsigned char)s[len]];
     }
   return sum;
}

typedef SLCONST struct
{
   char *name;
   unsigned int type;
}
Keyword_Table_Type;

static Keyword_Table_Type Keyword_Table [/* 117 */] =
{
   {"or",	OR_TOKEN},
   {"not",	NOT_TOKEN},
   {NULL,0},
   {"xor",	BXOR_TOKEN},
   {"return",	RETURN_TOKEN},
   {"exch",	EXCH_TOKEN},
   {NULL,0},
   {"continue",	CONT_TOKEN},
   {NULL,0},
   {"do",	DO_TOKEN},
   {"mod",	MOD_TOKEN},
   {"ERROR_BLOCK",	ERRBLK_TOKEN},
   {"USER_BLOCK2",	USRBLK2_TOKEN},
   {"USER_BLOCK4",	USRBLK4_TOKEN},
   {"__tmp",	TMP_TOKEN},
   {"pop",	POP_TOKEN},
   {NULL,0},
   {"EXIT_BLOCK",	EXITBLK_TOKEN},
   {"USER_BLOCK1",	USRBLK1_TOKEN},
   {"USER_BLOCK3",	USRBLK3_TOKEN},
   {"USER_BLOCK0",	USRBLK0_TOKEN},
   {NULL,0},
   {"shr",	SHR_TOKEN},
   {"chs",	CHS_TOKEN},
   {"sqr",	SQR_TOKEN},
   {NULL,0},
   {"struct",	STRUCT_TOKEN},
   {NULL,0},
   {NULL,0},
   {"switch",	SWITCH_TOKEN},
   {"mul2",	MUL2_TOKEN},
   {"sign",	SIGN_TOKEN},
   {"using",	USING_TOKEN},
   {"while",	WHILE_TOKEN},
   {NULL,0},
   {NULL,0},
   {"loop",	LOOP_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"public",	PUBLIC_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"break",	BREAK_TOKEN},
   {NULL,0},
   {"do_while",	DOWHILE_TOKEN},
   {NULL,0},
   {"shl",	SHL_TOKEN},
   {"else",	ELSE_TOKEN},
   {"and",	AND_TOKEN},
   {"orelse",	ORELSE_TOKEN},
   {"private",	PRIVATE_TOKEN},
   {NULL,0},
   {"if",	IF_TOKEN},
   {"for",	FOR_TOKEN},
   {"!if",	IFNOT_TOKEN},
   {NULL,0},
   {"_for",	_FOR_TOKEN},
   {"forever",	FOREVER_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"abs",	ABS_TOKEN},
   {"case",	CASE_TOKEN},
   {NULL,0},
   {"static",	STATIC_TOKEN},
   {"define",	DEFINE_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"typedef",	TYPEDEF_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"foreach",	FOREACH_TOKEN},
   {"andelse",	ANDELSE_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"variable",	VARIABLE_TOKEN},
};

static Keyword_Table_Type *is_keyword (char *str, unsigned int len)
{
   unsigned int hash;
   char *name;
   Keyword_Table_Type *kw;

   if ((len < MIN_KEYWORD_LEN)
       || (len > MAX_KEYWORD_LEN))
     return NULL;

   hash = keyword_hash (str, len);
   if ((hash > MAX_HASH_VALUE) || (hash < MIN_HASH_VALUE))
     return NULL;

   kw = &Keyword_Table[hash - MIN_HASH_VALUE];
   if ((NULL != (name = kw->name))
       && (*str == *name)
       && (0 == strcmp (str, name)))
     return kw;
   return NULL;
}
