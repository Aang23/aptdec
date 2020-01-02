/* 
 *  This file is part of Aptdec.
 *  Copyright (c) 2004-2009 Thierry Leconte (F4DWV), Xerbo (xerbo@protonmail.com) 2019-2020
 *
 *  Aptdec is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

char GviPalette[256*3] = {
  "\230t\17\233x\22\236{\27\241\200\33\244\203\37\247\210#\252\214'\255\220"
  ",\260\2240\264\2305\267\2358\272\240=\274\245A\300\251E\303\255I\306\262"
  "M\311\266Q\314\272V\317\276Z\322\302^\325\306b\330\312g\334\317k\337\323"
  "o\342\330s\344\333w\350\337{\352\344\200\356\350\203\361\354\207\364\360"
  "\213\367\364\220\372\370\224\376\376\230\376\375\230\376\372\227\376\366"
  "\224\376\362\222\376\357\220\376\352\216\376\347\213\376\343\211\376\340"
  "\207\376\334\205\376\330\202\376\325\200\376\321\177\376\315|\376\312z\376"
  "\306y\376\302v\376\277t\376\273q\376\267o\376\263m\376\260k\376\254h\376"
  "\250f\376\245d\376\241b\376\235_\376\232^\376\226[\376\223Y\376\217W\376"
  "\213U\376\207R\376\203Q\376\200N\376}L\376zJ\376vG\376rE\376nB\376k@\376"
  "g>\376d<\376`:\376\\7\376X6\376T3\376Q0\376M/\376J-\376F*\376C(\376>%\376"
  ";$\3767!\3763\37\3760\35\376,\32\376(\31\376$\26\376!\24\376\35\22\376\32"
  "\20\376\26\15\376\22\13\376\16\11\376\12\6\376\7\4\376\0\0\373\2\0\366\3"
  "\0\362\5\0\355\7\0\350\11\0\343\13\0\336\15\0\332\17\0\325\21\0\320\22\0"
  "\313\24\0\307\26\0\303\27\0\275\32\0\270\33\0\264\35\0\257\37\0\253!\0\246"
  "#\0\241%\0\234&\0\227)\0\223+\0\216,\0\212.\0\2050\0\2002\0}4\0w6\0s7\0n"
  "9\0i;\0e>\0`?\0[A\0VC\0QE\0MG\0HH\0CK\0?M\0:N\0""5P\0""0R\0,S\0'V\0\"X\0"
  "\36Z\0\31\\\0\23^\0\17_\0\12a\0\3b\0\6e\2\12i\5\17n\11\23r\14\30v\17\34{"
  "\23\40\200\26$\203\31)\207\35.\215\40""1\221$6\225':\232*?\236.C\2431G\250"
  "4K\2548O\260;U\265>Y\272A\\\276Eb\303Ie\307Lj\313On\320Ss\324Vw\331Y{\336"
  "]\200\342`\203\347d\207\353g\213\357j\217\364n\223\371q\230\376t\222\375"
  "{\207\374\205}\373\216r\371\230g\371\241\\\370\254Q\367\265F\365\300;\364"
  "\3110\363\323%\362\334\32\361\347\17\357\361\3\356\371\4\353\370\3\347\365"
  "\4\342\361\4\335\357\4\331\354\4\323\351\3\317\346\3\313\343\4\306\340\3"
  "\301\335\3\275\332\3\270\327\3\263\324\2\257\322\3\252\316\3\245\314\3\241"
  "\311\2\234\306\2\230\303\2\223\300\3\216\275\3\211\273\2\205\267\2\200\265"
  "\2|\262\2w\257\2s\254\2n\251\2j\246\2e\243\2`\240\2[\235\2W\232\1S\230\2"
  "M\225\1I\221\2E\217\1@\214\1;\211\1""7\206\1""1\203\1-\200\0(~\1${\0\37y"
  "\0\33u\0\25r\0\21p\0\14l\0\7j\0\3"
};
char TempPalette[256*3] = {
  "\376\376\376\376\376\376\375\375\376\374\375\376\374\375\375\374\373\375"
  "\373\373\375\372\373\375\372\373\374\372\372\374\371\372\374\371\371\375"
  "\370\371\374\367\370\375\367\370\374\367\367\374\366\367\373\366\366\373"
  "\365\366\373\364\366\373\364\365\374\363\365\373\363\364\373\363\364\373"
  "\362\363\372\361\363\372\361\362\372\361\361\372\360\361\372\357\361\372"
  "\357\361\372\356\360\372\355\357\371\355\357\371\355\356\372\354\356\371"
  "\354\355\371\354\355\371\353\355\371\353\354\370\352\353\370\351\353\370"
  "\351\353\370\350\352\370\350\351\370\347\351\370\347\351\370\346\350\367"
  "\346\350\367\346\350\367\345\346\367\344\346\367\344\346\367\344\345\366"
  "\342\346\366\343\344\366\342\345\366\341\344\366\341\343\365\340\343\366"
  "\337\342\365\337\341\366\336\341\365\337\341\365\336\340\365\335\340\365"
  "\335\337\364\334\337\364\334\336\364\334\336\364\333\336\364\333\335\364"
  "\332\334\364\331\334\363\331\334\364\330\333\363\330\333\363\327\332\363"
  "\326\332\363\327\331\362\326\331\362\325\331\362\325\330\362\324\330\363"
  "\323\327\362\323\327\362\322\326\362\322\326\362\322\325\361\321\325\361"
  "\321\325\361\320\323\361\320\323\361\317\323\361\317\322\360\316\322\361"
  "\316\322\360\315\321\360\314\321\360\314\320\360\313\320\360\313\317\360"
  "\312\317\357\311\317\357\312\316\357\311\316\357\310\315\356\310\314\356"
  "\307\314\356\307\313\357\306\313\357\306\313\356\305\312\356\305\312\355"
  "\305\311\356\304\311\356\303\311\355\302\310\355\302\307\355\302\307\355"
  "\301\306\355\301\306\355\300\305\354\300\305\354\277\305\354\277\304\354"
  "\276\304\354\276\304\354\276\302\353\275\303\354\274\302\353\274\301\353"
  "\274\301\353\273\301\353\272\300\353\272\277\353\271\277\352\271\276\352"
  "\270\276\352\270\276\352\267\275\351\267\274\352\266\275\352\265\273\352"
  "\265\273\351\264\273\351\265\272\351\263\272\351\263\272\351\263\271\350"
  "\263\271\351\262\271\350\261\267\350\260\267\350\260\266\350\257\267\350"
  "\256\270\350\255\272\350\254\273\351\252\275\351\251\275\351\247\300\351"
  "\247\301\351\244\303\352\243\306\352\242\310\353\240\312\352\237\315\352"
  "\236\317\352\234\322\353\233\324\353\232\330\353\230\332\354\227\336\354"
  "\225\341\354\224\345\354\223\350\354\222\354\355\220\355\353\217\355\347"
  "\216\355\344\214\355\337\212\356\334\211\356\330\210\357\324\207\356\317"
  "\205\357\313\204\357\307\202\360\302\200\357\275\200\360\270\177\360\264"
  "~\360\256|\361\251z\360\244y\361\237x\361\230v\362\223u\362\215s\362\207"
  "r\362\200p\362|o\362un\362np\363ls\363kw\363i|\364g\200\363f\204\363d\210"
  "\364b\215\364a\222\364`\227\365^\234\365]\241\365\\\246\365Z\254\366Y\261"
  "\365W\267\366U\275\366T\303\366S\311\367Q\317\367O\325\367N\334\370L\343"
  "\370J\352\370I\360\370G\367\371F\370\362E\371\354C\370\345A\371\336@\371"
  "\326?\372\316=\372\307;\372\277:\372\2679\373\2577\373\2475\373\2373\373"
  "\2261\373\2161\373\206.\373}-\374u,\375k*\374b(\375Y'\375O%\375E#\375;\""
  "\3762\40\376(\37\376\35"
};