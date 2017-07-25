/* Generated by libfsm */

#include LF_HEADER

#include <stddef.h>

#include <fsm/fsm.h>

struct fsm *
utf8_N_fsm(const struct fsm_options *opt)
{
	struct fsm *fsm;
	size_t i;

	struct fsm_state *s[81] = { 0 };

	fsm = fsm_new(opt);
	if (fsm == NULL) {
		return NULL;
	}

	for (i = 0; i < 81; i++) {
		s[i] = fsm_addstate(fsm);
		if (s[i] == NULL) {
			goto error;
		}
	}

	if (!fsm_addedge_literal(fsm, s[0], s[1], 0xc2)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xd9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[3], 0xdb)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[4], 0xdf)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[5], 0xe0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[6], 0xe1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[7], 0xe2)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[8], 0xe3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[9], 0xea)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[10], 0xef)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[11], 0xf0)) { goto error; }
	for (i = 0x30; i <= 0x39; i++) { /* '0' .. '9' */
		if (!fsm_addedge_literal(fsm, s[0], s[12], i)) { goto error; }
	}
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[1], s[12], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[1], s[12], 0xb9)) { goto error; }
	for (i = 0xbc; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[1], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xa9; i++) {
		if (!fsm_addedge_literal(fsm, s[2], s[12], i)) { goto error; }
	}
	for (i = 0xb0; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[3], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[4], s[12], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[5], s[13], 0xb9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[13], 0xbb)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[18], 0xa5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[18], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[18], 0xab)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[18], 0xb3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[18], 0xb7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[27], 0xa7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[28], 0xad)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[29], 0xaf)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[30], 0xb1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[31], 0xb5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[32], 0xbc)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[3], 0xae)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[4], 0x81)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[13], 0x82)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[13], 0xa0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[13], 0xad)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[21], 0x8d)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[22], 0x9b)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[23], 0x9f)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[24], 0xa5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[25], 0xa7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[26], 0xaa)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[6], s[26], 0xb1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[4], 0x82)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[33], 0x81)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[34], 0x85)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[35], 0x86)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[36], 0x91)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[37], 0x92)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[38], 0x93)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[39], 0x9d)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[40], 0x9e)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[7], s[41], 0xb3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[8], s[2], 0x88)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[8], s[14], 0x80)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[8], s[15], 0x86)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[8], s[16], 0x89)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[8], s[17], 0x8a)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[2], 0x98)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[3], 0xaf)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[4], 0xa4)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[13], 0xa3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[13], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[18], 0x9b)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[19], 0xa0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[9], s[20], 0xa7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[10], s[13], 0xbc)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[11], s[42], 0x90)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[11], s[43], 0x91)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[11], s[44], 0x92)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[11], s[45], 0x96)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[11], s[46], 0x9d)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[11], s[47], 0x9e)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[11], s[48], 0x9f)) { goto error; }
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[13], s[12], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[14], s[12], 0x87)) { goto error; }
	for (i = 0xa1; i <= 0xa9; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[12], i)) { goto error; }
	}
	for (i = 0xb8; i <= 0xba; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[12], i)) { goto error; }
	}
	for (i = 0x92; i <= 0x95; i++) {
		if (!fsm_addedge_literal(fsm, s[15], s[12], i)) { goto error; }
	}
	for (i = 0x88; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[12], i)) { goto error; }
	}
	for (i = 0x91; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[12], i)) { goto error; }
	}
	for (i = 0xb1; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[12], i)) { goto error; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[18], s[12], i)) { goto error; }
	}
	for (i = 0xb0; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[12], i)) { goto error; }
	}
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[12], i)) { goto error; }
	}
	for (i = 0xb0; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[12], i)) { goto error; }
	}
	for (i = 0xa9; i <= 0xbc; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[12], i)) { goto error; }
	}
	for (i = 0xae; i <= 0xb0; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xa9; i++) {
		if (!fsm_addedge_literal(fsm, s[23], s[12], i)) { goto error; }
	}
	for (i = 0xb0; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[23], s[12], i)) { goto error; }
	}
	for (i = 0x86; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[24], s[12], i)) { goto error; }
	}
	for (i = 0x90; i <= 0x9a; i++) {
		if (!fsm_addedge_literal(fsm, s[25], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[12], i)) { goto error; }
	}
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[12], i)) { goto error; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[27], s[12], i)) { goto error; }
	}
	for (i = 0xb4; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[27], s[12], i)) { goto error; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[28], s[12], i)) { goto error; }
	}
	for (i = 0xb2; i <= 0xb7; i++) {
		if (!fsm_addedge_literal(fsm, s[28], s[12], i)) { goto error; }
	}
	for (i = 0xa6; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[29], s[12], i)) { goto error; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[12], i)) { goto error; }
	}
	for (i = 0xb8; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[12], i)) { goto error; }
	}
	for (i = 0x98; i <= 0x9e; i++) {
		if (!fsm_addedge_literal(fsm, s[31], s[12], i)) { goto error; }
	}
	for (i = 0xa6; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[31], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[12], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[33], s[12], 0xb0)) { goto error; }
	for (i = 0xb4; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[33], s[12], i)) { goto error; }
	}
	for (i = 0x90; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[34], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x82; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[12], i)) { goto error; }
	}
	for (i = 0x85; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[36], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x9b; i++) {
		if (!fsm_addedge_literal(fsm, s[37], s[12], i)) { goto error; }
	}
	for (i = 0xaa; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[38], s[12], i)) { goto error; }
	}
	for (i = 0xb6; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[39], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x93; i++) {
		if (!fsm_addedge_literal(fsm, s[40], s[12], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[41], s[12], 0xbd)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[2], 0x92)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[61], 0x84)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[62], 0x85)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[63], 0x86)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[64], 0x8b)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[65], 0x8c)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[66], 0x8d)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[67], 0x8f)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[68], 0xa1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[69], 0xa2)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[70], 0xa3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[71], 0xa4)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[72], 0xa6)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[73], 0xa7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[74], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[75], 0xaa)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[76], 0xab)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[77], 0xad)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[78], 0xae)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[79], 0xb3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[80], 0xb9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[3], 0x83)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[3], 0x8b)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[4], 0x9b)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[13], 0x91)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[13], 0x93)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[13], 0x99)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[13], 0xb5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[39], 0x84)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[56], 0x81)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[57], 0x87)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[58], 0x9c)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[59], 0xa3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[43], s[60], 0xb1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[44], s[54], 0x90)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[44], s[55], 0x91)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[45], s[2], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[45], s[51], 0xad)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[46], s[52], 0x8d)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[46], s[53], 0x9f)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[47], s[13], 0xa5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[47], s[50], 0xa3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[49], 0x84)) { goto error; }
	for (i = 0x80; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[49], s[12], i)) { goto error; }
	}
	for (i = 0x87; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[50], s[12], i)) { goto error; }
	}
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[51], s[12], i)) { goto error; }
	}
	for (i = 0x9b; i <= 0xa1; i++) {
		if (!fsm_addedge_literal(fsm, s[51], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xb1; i++) {
		if (!fsm_addedge_literal(fsm, s[52], s[12], i)) { goto error; }
	}
	for (i = 0x8e; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[53], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[54], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0xae; i++) {
		if (!fsm_addedge_literal(fsm, s[55], s[12], i)) { goto error; }
	}
	for (i = 0x92; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[56], s[12], i)) { goto error; }
	}
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[57], s[12], i)) { goto error; }
	}
	for (i = 0xa1; i <= 0xb4; i++) {
		if (!fsm_addedge_literal(fsm, s[57], s[12], i)) { goto error; }
	}
	for (i = 0xb0; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[58], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[12], i)) { goto error; }
	}
	for (i = 0x90; i <= 0xac; i++) {
		if (!fsm_addedge_literal(fsm, s[60], s[12], i)) { goto error; }
	}
	for (i = 0x87; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[61], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[62], s[12], i)) { goto error; }
	}
	for (i = 0x8a; i <= 0x8b; i++) {
		if (!fsm_addedge_literal(fsm, s[63], s[12], i)) { goto error; }
	}
	for (i = 0xa1; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xa3; i++) {
		if (!fsm_addedge_literal(fsm, s[65], s[12], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[66], s[12], 0x81)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[66], s[12], 0x8a)) { goto error; }
	for (i = 0x91; i <= 0x95; i++) {
		if (!fsm_addedge_literal(fsm, s[67], s[12], i)) { goto error; }
	}
	for (i = 0x98; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[68], s[12], i)) { goto error; }
	}
	for (i = 0xb9; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[68], s[12], i)) { goto error; }
	}
	for (i = 0xa7; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[69], s[12], i)) { goto error; }
	}
	for (i = 0xbb; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[70], s[12], i)) { goto error; }
	}
	for (i = 0x96; i <= 0x9b; i++) {
		if (!fsm_addedge_literal(fsm, s[71], s[12], i)) { goto error; }
	}
	for (i = 0xbc; i <= 0xbd; i++) {
		if (!fsm_addedge_literal(fsm, s[72], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[73], s[12], i)) { goto error; }
	}
	for (i = 0x92; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[73], s[12], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x87; i++) {
		if (!fsm_addedge_literal(fsm, s[74], s[12], i)) { goto error; }
	}
	for (i = 0xbd; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[74], s[12], i)) { goto error; }
	}
	for (i = 0x9d; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[75], s[12], i)) { goto error; }
	}
	for (i = 0xab; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[76], s[12], i)) { goto error; }
	}
	for (i = 0x98; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[77], s[12], i)) { goto error; }
	}
	for (i = 0xb8; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[77], s[12], i)) { goto error; }
	}
	for (i = 0xa9; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[78], s[12], i)) { goto error; }
	}
	for (i = 0xba; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[79], s[12], i)) { goto error; }
	}
	for (i = 0xa0; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[80], s[12], i)) { goto error; }
	}

	fsm_setstart(fsm, s[0]);
	fsm_setend(fsm, s[12], 1);

	return fsm;

error:

	fsm_free(fsm);

	return NULL;
}
