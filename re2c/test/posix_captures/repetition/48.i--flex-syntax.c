/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		goto yy3;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy5;
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy4;
	yyt2 = yyt6 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt2 = yyt6 = YYCURSOR;
		goto yy8;
	}
	yyt4 = yyt5 = NULL;
	yyt3 = yyt7 = YYCURSOR;
yy7:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[5] = yyt5;
	yypmatch[6] = yyt6;
	yypmatch[7] = yyt7;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt4 = yyt5 = NULL;
		yyt3 = yyt7 = YYCURSOR;
		goto yy7;
	}
	yyt2 = yyt4 = yyt6 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt4 = yyt5 = NULL;
		yyt3 = yyt7 = YYCURSOR;
		goto yy7;
	}
	++YYCURSOR;
	yyt6 = yyt7 = NULL;
	yyt3 = yyt5 = YYCURSOR;
	goto yy7;
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
