/*settings*{"name":"Buttons tester","author":"Loopingstar","image":[0,8,136,136,136,136,136,136,136,136,128,0,0,143,17,17,17,17,17,17,17,17,248,0,8,241,17,17,17,17,17,17,17,17,31,128,143,17,119,164,17,17,17,17,17,17,17,248,129,17,170,164,17,17,17,17,17,17,17,24,129,17,170,164,17,17,119,167,17,119,167,24,135,122,170,170,170,167,170,170,119,170,170,120,135,170,170,170,170,170,170,170,74,170,170,72,138,170,170,170,170,170,170,170,74,170,170,72,132,68,170,164,68,74,170,170,74,170,170,72,129,17,170,164,17,17,68,68,17,68,68,24,129,17,170,164,17,17,17,17,17,17,17,24,143,17,68,68,17,17,17,17,17,17,17,248,8,241,17,17,17,17,17,17,17,17,31,128,0,143,17,17,17,17,17,17,17,17,248,0,0,8,136,136,136,136,136,136,136,136,128,0]}*/
char i, count, key, last_key, text_pos, tone_freq, version = 1.1;

char btnUp[] = {
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x4};

char btnDown[] = {
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x0};

char btnLeft[] = {
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x55,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x55,
0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55,
0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x55,
0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4};

char btnRight[] = {
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x55, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44,
0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44,
0x55, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x55, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00,
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x0};

char btnA[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x54, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x54, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x54, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x45, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44,
0x00, 0x44, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0};

char btnB[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44, 0x00,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44,
0x00, 0x44, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0};

char btnSelect[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x44, 0x44, 0x45, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x45, 0x55, 0x54, 0x44, 0x45, 0x54, 0x44, 0x44, 0x44, 0x45, 0x44,
0x44, 0x55, 0x54, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x45, 0x55, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 0x45, 0x44,
0x44, 0x55, 0x54, 0x45, 0x55, 0x44, 0x54, 0x45, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x44, 0x45, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x54, 0x45, 0x55, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x54, 0x45, 0x55, 0x54, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x54, 0x44, 0x44, 0x45, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x45, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x45, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x54, 0x45, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x54, 0x45, 0x55, 0x54, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x54, 0x45, 0x55, 0x44, 0x54, 0x45, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x54, 0x44, 0x55, 0x44, 0x45, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x54, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x44, 0x44, 0x45, 0x44, 0x44, 0x44, 0x45, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x44, 0x44, 0x45, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x44, 0x44, 0x45, 0x44, 0x44, 0x44, 0x45, 0x55, 0x54, 0x44, 0x45, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0};

char btnStart[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 0x45, 0x54, 0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x45, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 0x54, 0x44, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x54, 0x45, 0x55, 0x44, 0x55, 0x55, 0x44, 0x54, 0x45, 0x55, 0x44, 0x55, 0x55, 0x44, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44, 0x54, 0x45, 0x55, 0x44, 0x55, 0x55, 0x44, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x44, 0x55, 0x55, 0x44, 0x54, 0x45, 0x55, 0x44, 0x44, 0x44, 0x45, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x45, 0x55, 0x44, 0x55, 0x54, 0x45, 0x55, 0x44, 0x55, 0x44, 0x44, 0x44, 0x55, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x45, 0x55, 0x44, 0x55, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x44, 0x45, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x55, 0x54, 0x45, 0x55, 0x44, 0x55, 0x54, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x54, 0x45, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x45, 0x55, 0x44, 0x55, 0x44, 0x55, 0x55, 0x54, 0x45, 0x44, 0x55, 0x54, 0x44, 0x55, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x54, 0x44, 0x44, 0x55, 0x55, 0x44, 0x55, 0x44, 0x55, 0x55, 0x54, 0x45, 0x44, 0x55, 0x55, 0x44, 0x45, 0x54, 0x45, 0x55, 0x55, 0x55, 0x55, 0x44,
0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0};

char background[] = {0x7e,0x11,0x4d,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x38,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x37,0x11,0x83,0x18,0x81,0x6,0x11,0x83,0x18,0x81,0x36,0x11,0x83,0x18,0x81,0x6,0x11,0x83,0x18,0x81,0x35,0x11,0x83,0x18,0x81,0x8,0x11,0x83,0x18,0x81,0x34,0x11,0x83,0x18,0x81,0x8,0x11,0x83,0x18,0x81,0x34,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0x3,0x11,0x83,0x18,0x81,0x34,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0x3,0x11,0x83,0x18,0x81,0x34,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x81,0x34,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0x34,0x11,0x85,0x18,0x81,0x11,0x1a,0x4,0xaa,0x85,0xa1,0x11,0x18,0x8f,0xd,0x11,0x82,0x18,0x5,0x88,0x82,0x81,0xa,0x11,0x82,0x18,0x5,0x88,0x82,0x81,0xf,0x11,0x85,0x18,0x81,0x11,0x1a,0x4,0xaa,0x85,0xa1,0x11,0x18,0x8f,0xd,0x11,0x82,0x18,0x5,0x88,0x82,0x81,0xa,0x11,0x82,0x18,0x5,0x88,0x82,0x81,0xf,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0xb,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x81,0x6,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x81,0xd,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0xb,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x81,0x6,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x81,0xd,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0xa,0x11,0x83,0x18,0x81,0x9,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x9,0x11,0x83,0x18,0x81,0xc,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0xa,0x11,0x83,0x18,0x81,0x9,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x9,0x11,0x83,0x18,0x81,0x6,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x8,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x3,0x11,0x83,0x18,0x81,0xb,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0xb,0x11,0x83,0x18,0x81,0x5,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x8,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x3,0x11,0x83,0x18,0x81,0xb,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0xb,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x4,0x11,0x82,0x1a,0x2,0xaa,0x4,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x4,0xaa,0x82,0xa1,0x3,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x4,0x11,0x82,0x1a,0x2,0xaa,0x4,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x5,0xaa,0x3,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x85,0x18,0x81,0x18,0x81,0x5,0x11,0x82,0x1a,0x2,0xaa,0x5,0x11,0x85,0x18,0x81,0x18,0x81,0x4,0x11,0x5,0xaa,0x82,0xa1,0x3,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x18,0x11,0x85,0x18,0x81,0x18,0x81,0x5,0x11,0x85,0xaa,0xa1,0xaa,0xa1,0x4,0x11,0x85,0x18,0x81,0x18,0x81,0x4,0x11,0x83,0xaa,0xa1,0x2,0x11,0x83,0xaa,0xa1,0x3,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0xe,0x11,0x83,0x1a,0xa1,0x3,0x11,0x85,0x18,0x81,0x18,0x81,0x5,0x11,0x85,0xaa,0xa1,0xaa,0xa1,0x4,0x11,0x85,0x18,0x81,0x18,0x81,0x4,0x11,0x83,0xaa,0xa1,0x2,0x11,0x83,0xaa,0xa1,0x3,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0xe,0x11,0x83,0x1a,0xa1,0x3,0x11,0x85,0x18,0x81,0x18,0x81,0x5,0x11,0x85,0xaa,0xa1,0xaa,0xa1,0x4,0x11,0x85,0x18,0x81,0x18,0x81,0x4,0x11,0x83,0xaa,0xa1,0x2,0x11,0x83,0xaa,0xa1,0x3,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0xa,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0x2,0x11,0x85,0x18,0x81,0x18,0x81,0x5,0x11,0x85,0xaa,0x11,0x1a,0xaa,0x4,0x11,0x85,0x18,0x81,0x18,0x81,0x4,0x11,0x5,0xaa,0x4,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0xa,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0x2,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x86,0x1a,0xaa,0x11,0x1a,0xaa,0x4,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x5,0xaa,0x4,0x11,0x83,0x18,0x8f,0x2,0x11,0x85,0x18,0x81,0x11,0x1a,0x4,0xaa,0x82,0xa1,0xa,0x11,0x82,0x1a,0x4,0xaa,0x87,0xa1,0x11,0x18,0x8f,0x18,0x81,0x4,0x11,0x86,0x1a,0xaa,0x11,0x1a,0xaa,0x4,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x5,0xaa,0x82,0xa1,0x3,0x11,0x83,0x18,0x8f,0x2,0x11,0x85,0x18,0x81,0x11,0x1a,0x4,0xaa,0x82,0xa1,0xa,0x11,0x82,0x1a,0x4,0xaa,0x87,0xa1,0x11,0x18,0x8f,0x18,0x81,0x4,0x11,0x82,0x1a,0x4,0xaa,0x4,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x83,0xaa,0xa1,0x2,0x11,0x83,0x1a,0xaa,0x3,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0xa,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0x2,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x5,0xaa,0x82,0xa1,0x3,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x83,0xaa,0xa1,0x2,0x11,0x83,0x1a,0xaa,0x3,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0xa,0x11,0x82,0x1a,0x3,0xaa,0x82,0xa1,0x2,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x5,0xaa,0x82,0xa1,0x3,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x83,0xaa,0xa1,0x2,0x11,0x83,0x1a,0xaa,0x3,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0xe,0x11,0x83,0x1a,0xa1,0x3,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x83,0xaa,0xa1,0x2,0x11,0x83,0xaa,0xa1,0x3,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x6,0xaa,0x3,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0xe,0x11,0x83,0x1a,0xa1,0x3,0x11,0x85,0x18,0x8f,0x18,0x81,0x3,0x11,0x83,0x1a,0xaa,0x3,0x11,0x83,0x1a,0xaa,0x3,0x11,0x85,0x18,0x8f,0x18,0x81,0x4,0x11,0x5,0xaa,0x82,0xa1,0x3,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x18,0x11,0x86,0x18,0x8f,0x11,0x18,0x81,0x2,0x11,0x83,0x1a,0xaa,0x3,0x11,0x83,0x1a,0xaa,0x2,0x11,0x87,0x18,0x8f,0xff,0x11,0x18,0x81,0x3,0x11,0x5,0xaa,0x3,0x11,0x84,0x18,0x8f,0xff,0x2,0x11,0x83,0x18,0x81,0x18,0x11,0x86,0x18,0x8f,0x11,0x18,0x81,0xb,0x11,0x87,0x18,0x8f,0xff,0x11,0x18,0x81,0xb,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x16,0x11,0x87,0x18,0x8f,0xff,0x11,0x18,0x81,0xb,0x11,0x87,0x18,0x8f,0xff,0x11,0x18,0x81,0xb,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x16,0x11,0x87,0x18,0x8f,0xff,0x11,0x18,0x81,0xb,0x11,0x87,0x18,0x8f,0xff,0x11,0x18,0x81,0xb,0x11,0x84,0x18,0x8f,0xff,0x4,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x8,0x11,0x82,0x18,0x6,0x88,0x82,0x8f,0x2,0xff,0x2,0x11,0x83,0x18,0x81,0x9,0x11,0x83,0x18,0x8f,0x2,0xff,0x2,0x11,0x83,0x18,0x81,0x9,0x11,0x83,0x18,0x8f,0x2,0xff,0x4,0x11,0x82,0x18,0x6,0x88,0x82,0x81,0x8,0x11,0x82,0x18,0x6,0x88,0x82,0x8f,0x2,0xff,0x2,0x11,0x83,0x18,0x81,0x9,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x9,0x11,0x84,0x18,0x8f,0xff,0x6,0x11,0x5,0xff,0x83,0xf8,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0x8,0xff,0x3,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x4,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x7,0x11,0x4,0xff,0x83,0xf8,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0x7,0xff,0x4,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x4,0x11,0x84,0x18,0x88,0x81,0x5,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x7,0x11,0x4,0xff,0x83,0xf8,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0x7,0xff,0x5,0x11,0x83,0xff,0xf8,0x5,0x88,0x82,0x8f,0x4,0xff,0x5,0x11,0x83,0xff,0xf8,0x5,0x88,0x82,0x8f,0x4,0xff,0xb,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0xd,0x11,0x82,0xf8,0x5,0x88,0x82,0x8f,0x3,0xff,0x7,0x11,0x82,0xf8,0x5,0x88,0x82,0x8f,0x3,0xff,0xc,0x11,0x85,0x18,0x81,0x11,0x1a,0x4,0xaa,0x85,0xa1,0x11,0x18,0x8f,0xd,0x11,0xa,0xff,0x7,0x11,0xa,0xff,0xc,0x11,0x85,0x18,0x81,0x11,0x1a,0x4,0xaa,0x85,0xa1,0x11,0x18,0x8f,0xf,0x11,0x6,0xff,0xb,0x11,0x6,0xff,0xe,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0xf,0x11,0x6,0xff,0xb,0x11,0x6,0xff,0xe,0x11,0x83,0x18,0x81,0x2,0x11,0x82,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x8f,0x34,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0x3,0x11,0x83,0x18,0x8f,0x34,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0x3,0x11,0x83,0x18,0x8f,0x34,0x11,0x83,0x18,0x81,0x8,0x11,0x83,0x18,0x8f,0x34,0x11,0x83,0x18,0x81,0x8,0x11,0x83,0x18,0x8f,0x35,0x11,0x83,0x18,0x81,0x6,0x11,0x84,0x18,0x8f,0xff,0x35,0x11,0x83,0x18,0x81,0x6,0x11,0x84,0x18,0x8f,0xff,0x36,0x11,0x82,0x18,0x6,0x88,0x82,0x8f,0x2,0xff,0x36,0x11,0x82,0x18,0x6,0x88,0x82,0x8f,0x2,0xff,0x37,0x11,0x9,0xff,0x38,0x11,0x7,0xff,0x39,0x11,0x7,0xff,0x72,0x11,0x82,0x18,0x12,0x88,0x82,0x81,0xc,0x11,0x82,0x18,0x12,0x88,0x82,0x81,0xc,0x11,0x82,0x18,0x12,0x88,0x82,0x81,0xc,0x11,0x82,0x18,0x12,0x88,0x82,0x81,0xa,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x81,0x8,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x81,0x8,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x81,0x8,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x81,0x7,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x81,0x6,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x81,0x6,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x81,0x6,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x81,0x5,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x4,0x11,0x83,0x18,0x81,0x18,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x18,0x81,0x1a,0x11,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x1a,0x11,0x83,0x18,0x81,0x2,0x11,0x85,0x18,0x81,0x11,0x1a,0x2,0xaa,0x82,0x11,0x3,0xaa,0x84,0xa1,0x1a,0xa1,0x2,0x11,0x82,0x1a,0x3,0xaa,0x2,0x11,0x2,0xaa,0x82,0x11,0x4,0xaa,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x4,0x11,0x2,0xaa,0x82,0xa1,0x4,0xaa,0x86,0x11,0xaa,0xa1,0x11,0x1a,0x3,0xaa,0x82,0x1a,0x3,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x81,0x2,0x11,0x84,0x18,0x81,0x11,0x3,0xaa,0x82,0xa1,0x3,0xaa,0x84,0xa1,0x1a,0xa1,0x2,0x11,0x82,0x1a,0x3,0xaa,0x83,0x11,0x1a,0x2,0xaa,0x82,0xa1,0x4,0xaa,0x83,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x82,0x1a,0x7,0xaa,0x86,0x11,0xaa,0xa1,0x11,0x1a,0x7,0xaa,0x82,0xa1,0x2,0x11,0x83,0x18,0x81,0x2,0x11,0x89,0x18,0x81,0x11,0xaa,0x11,0x1a,0xa1,0xaa,0x3,0x11,0x83,0x1a,0xa1,0x2,0x11,0x83,0x1a,0xa1,0x3,0x11,0x8b,0xaa,0xa1,0x1a,0xaa,0x11,0x1a,0xa1,0x11,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x94,0x1a,0xa1,0x11,0xaa,0x11,0x1a,0xa1,0x11,0x1a,0xa1,0xaa,0x11,0x1a,0xa1,0x11,0x1a,0xa1,0x11,0xaa,0x4,0x11,0x83,0x18,0x81,0x2,0x11,0x85,0x18,0x81,0x11,0xaa,0x3,0x11,0x82,0xaa,0x3,0x11,0x83,0x1a,0xa1,0x2,0x11,0x83,0x1a,0xa1,0x3,0x11,0x82,0xaa,0x2,0x11,0x88,0xa1,0x11,0x1a,0xa1,0x11,0x18,0x81,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x83,0x1a,0xa1,0x3,0x11,0x8f,0x1a,0xa1,0x11,0x1a,0xa1,0xaa,0x11,0x1a,0xa1,0x11,0x1a,0xa1,0x11,0xaa,0x4,0x11,0x83,0x18,0x81,0x2,0x11,0x84,0x18,0x81,0x11,0x3,0xaa,0x82,0x11,0x3,0xaa,0x84,0xa1,0x1a,0xa1,0x2,0x11,0x82,0x1a,0x3,0xaa,0x83,0x11,0xaa,0x4,0x11,0x86,0x1a,0xa1,0x11,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x82,0x1a,0x2,0xaa,0x8b,0xa1,0x11,0x1a,0xa1,0x11,0x1a,0xa1,0xaa,0x11,0x1a,0x3,0xaa,0x2,0x11,0x82,0xaa,0x4,0x11,0x83,0x18,0x8f,0x2,0x11,0x85,0x18,0x81,0x11,0x1a,0x2,0xaa,0x82,0xa1,0x3,0xaa,0x84,0xa1,0x1a,0xa1,0x2,0x11,0x82,0x1a,0x3,0xaa,0x83,0x11,0xaa,0x4,0x11,0x86,0x1a,0xa1,0x11,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x4,0x11,0x3,0xaa,0x8a,0x11,0x1a,0xa1,0x11,0xaa,0x11,0x1a,0xa1,0x1a,0x2,0xaa,0x82,0xa1,0x2,0x11,0x82,0xaa,0x4,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x84,0x1a,0xa1,0xaa,0x3,0x11,0x83,0x1a,0xa1,0x2,0x11,0x83,0x1a,0xa1,0x3,0x11,0x82,0xaa,0x2,0x11,0x88,0xa1,0x11,0x1a,0xa1,0x11,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x6,0x11,0x86,0xaa,0x11,0x1a,0xa1,0x11,0x3,0xaa,0x86,0xa1,0x1a,0xa1,0x1a,0xaa,0x2,0x11,0x82,0xaa,0x4,0x11,0x83,0x18,0x8f,0x2,0x11,0x89,0x18,0x81,0x11,0xaa,0x11,0x1a,0xa1,0xaa,0x3,0x11,0x83,0x1a,0xa1,0x2,0x11,0x83,0x1a,0xa1,0x3,0x11,0x8b,0xaa,0xa1,0x1a,0xaa,0x11,0x1a,0xa1,0x11,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x89,0x1a,0xa1,0x11,0xaa,0x11,0x1a,0xa1,0x11,0x3,0xaa,0x86,0xa1,0x1a,0xa1,0x11,0xaa,0x2,0x11,0x82,0xaa,0x4,0x11,0x83,0x18,0x8f,0x2,0x11,0x84,0x18,0x81,0x11,0x3,0xaa,0x82,0xa1,0x3,0xaa,0x83,0xa1,0x1a,0x3,0xaa,0x82,0x1a,0x3,0xaa,0x83,0x11,0x1a,0x2,0xaa,0x88,0xa1,0x11,0x1a,0xa1,0x11,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x3,0x11,0x82,0x1a,0x3,0xaa,0x86,0x11,0x1a,0xa1,0x1a,0xa1,0x2,0x11,0x89,0xaa,0x1a,0xa1,0x11,0xaa,0xa1,0x11,0xaa,0x4,0x11,0x83,0x18,0x8f,0x2,0x11,0x85,0x18,0x81,0x11,0x1a,0x2,0xaa,0x82,0x11,0x3,0xaa,0x83,0xa1,0x1a,0x3,0xaa,0x82,0x1a,0x3,0xaa,0x2,0x11,0x2,0xaa,0x2,0x11,0x86,0x1a,0xa1,0x11,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x4,0x11,0x2,0xaa,0x87,0xa1,0x11,0x1a,0xa1,0x1a,0xa1,0x2,0x11,0x89,0xaa,0x1a,0xa1,0x11,0x1a,0xaa,0x11,0xaa,0x4,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x1a,0x11,0x83,0x18,0x8f,0x2,0x11,0x83,0x18,0x81,0x1a,0x11,0x83,0x18,0x8f,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x3,0x11,0x83,0x18,0x81,0x18,0x11,0x84,0x18,0x8f,0xff,0x4,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x8f,0x2,0xff,0x4,0x11,0x83,0x18,0x81,0x16,0x11,0x83,0x18,0x8f,0x2,0xff,0x4,0x11,0x83,0x18,0x81,0x16,0x11,0x84,0x18,0x8f,0xff,0x5,0x11,0x83,0x18,0x81,0x16,0x11,0x84,0x18,0x8f,0xff,0x6,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x6,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x6,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x6,0x11,0x84,0x18,0x88,0x81,0x12,0x11,0x84,0x18,0x88,0x8f,0x2,0xff,0x7,0x11,0x83,0xff,0xf8,0x12,0x88,0x82,0x8f,0x4,0xff,0x7,0x11,0x83,0xff,0xf8,0x12,0x88,0x82,0x8f,0x4,0xff,0x8,0x11,0x82,0xf8,0x12,0x88,0x82,0x8f,0x3,0xff,0x9,0x11,0x82,0xf8,0x12,0x88,0x82,0x8f,0x3,0xff,0x9,0x11,0x17,0xff,0x9,0x11,0x17,0xff,0xb,0x11,0x13,0xff,0xd,0x11,0x13,0xff,0xd,0x11,0x13,0xff,0xd,0x11,0x13,0xff,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x7e,0x11,0x30,0x11,0x82,0x18,0x4,0x11,0x82,0x18,0xe,0x11,0x82,0x81,0x2b,0x11,0x83,0x18,0x87,0x2,0x18,0x96,0x11,0x18,0x11,0x78,0x71,0x78,0x71,0x88,0x71,0x81,0x88,0x71,0x78,0x71,0x78,0x81,0x88,0x17,0x88,0x18,0x78,0x27,0x11,0x4,0x18,0x84,0x11,0x18,0x11,0xb,0x81,0x82,0x77,0x2,0x81,0x3,0x18,0x82,0x81,0x27,0x11,0x8e,0x18,0x87,0x17,0x88,0x11,0x17,0x81,0x78,0x71,0x78,0x71,0x88,0x71,0x3,0x81,0x8a,0x78,0x81,0x88,0x71,0x81,0x17,0x88,0x18,0x71,0x2a,0x11,0x82,0x18,0x7,0x11,0x82,0x81,0x5,0x11,0x82,0x81,0x30,0x11,0x83,0x18,0x87,0x7,0x11,0x82,0x81,0x4,0x11,0x83,0x88,0x71,0x7e,0x11,0x1d,0x11};

void init() {
	getsprite(3, btnUp);
	spritesetvalue(3, S_WIDTH, 22);
	spritesetvalue(3, S_HEIGHT, 18);

	getsprite(4, btnDown);
	spritesetvalue(4, S_WIDTH, 22);
	spritesetvalue(4, S_HEIGHT, 18);

	getsprite(5, btnLeft);
	spritesetvalue(5, S_WIDTH, 18);
	spritesetvalue(5, S_HEIGHT, 22);

	getsprite(6, btnRight);
	spritesetvalue(6, S_WIDTH, 18);
	spritesetvalue(6, S_HEIGHT, 22);

	getsprite(1, btnA);
	spritesetvalue(1, S_WIDTH, 32);
	spritesetvalue(1, S_HEIGHT, 32);

	getsprite(2, btnB);
	spritesetvalue(2, S_WIDTH, 32);
	spritesetvalue(2, S_HEIGHT, 32);

	getsprite(7, btnSelect);
	spritesetvalue(7, S_WIDTH, 58);
	spritesetvalue(7, S_HEIGHT, 32);

	getsprite(8, btnStart);
	spritesetvalue(8, S_WIDTH, 58);
	spritesetvalue(8, S_HEIGHT, 32);

	count = 0;
	text_pos = 1;

	setbgcolor(1);
	setcolor(12);
}

void press(int sprId, int sprX, int sprY) {
	putsprite(sprId, sprX, sprY);
	if (key != last_key) {
		count++;
		tone_freq = random(9750) + 250; // between 250 - 10000 hertz
		tone(tone_freq, 150);
	}
}

void main(){
	init();

	while(1) {
		putimagerle(background, 0, 0, 128, 128);

		for(i = 1; i <= 8; i++) {
			spritesetvalue(i, S_LIVES, 0);
		}

		key = getkey();

		if (key & KEY_UP) {
			press(3, 19, 3);
		}
		if (key & KEY_DOWN) {
			press(4, 19, 39);
		}
		if (key & KEY_LEFT) {
			press(5, 3, 19);
		}
		if (key & KEY_RIGHT) {
			press(6, 39, 19);
		}

		if (key & KEY_A) {
			press(1, 59, 13);
		}
		if (key & KEY_B){
			press(2, 93, 13);
		}

		if (key & KEY_SELECT){
			press(7, 3, 61);
		}
		if (key & KEY_START){
			press(8, 67, 61);
		}

		if (count > 99) text_pos = 0
		gotoxy(text_pos, 13);

		printf("You clicked %d times", count);

		delayredraw();
		last_key = key;
	}
}