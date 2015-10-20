#ifdef __linux__
#include <strings.h>
#define stricmp strcasecmp
#define strnicmp strncasecmp
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
 srand(time(NULL));
 bool output_random = false;
 bool use_lower = false;
 bool use_upper = false;
 bool no_io = false;
 int desired_uniques = 0;
 int min_uniques = 6;
 int slot1_start_at = 0;
 int slot1_stop_at = 0;
 bool starts_with_letter = false;
 bool make_next_start_at = false;
 bool make_next_stop_at = false;
 int make_next_start_at_cnt = 0;
 int make_next_stop_at_cnt = 0;
 unsigned long long int start_at = 0;
 unsigned long long int stop_at = 0;
 if (argc > 1) {
  for (int i=1;i<argc;++i) {
   if (stricmp(argv[i], "-random") == 0) { output_random = true; }
   if (stricmp(argv[i], "-lower") == 0) { use_lower = true; }
   if (stricmp(argv[i], "-upper") == 0) { use_upper = true; }
   if (stricmp(argv[i], "-noio") == 0) { no_io = true; }
   if (stricmp(argv[i], "-1unique") == 0) { desired_uniques = 1; }
   if (stricmp(argv[i], "-2uniques") == 0) { desired_uniques = 2; }
   if (stricmp(argv[i], "-3uniques") == 0) { desired_uniques = 3; }
   if (stricmp(argv[i], "-4uniques") == 0) { desired_uniques = 4; }
   if (stricmp(argv[i], "-5uniques") == 0) { desired_uniques = 5; }
   if (stricmp(argv[i], "-6uniques") == 0) { desired_uniques = 6; }
   if (stricmp(argv[i], "-7uniques") == 0) { desired_uniques = 7; }
   if (stricmp(argv[i], "-8uniques") == 0) { desired_uniques = 8; }
   if (stricmp(argv[i], "-1minunique") == 0) { min_uniques = 1; }  if (stricmp(argv[i], "-minunique1") == 0) { min_uniques = 1; }  if (stricmp(argv[i], "-min1unique") == 0) { min_uniques = 1; }
   if (stricmp(argv[i], "-2minuniques") == 0) { min_uniques = 2; } if (stricmp(argv[i], "-minuniques2") == 0) { min_uniques = 2; } if (stricmp(argv[i], "-min2uniques") == 0) { min_uniques = 2; }
   if (stricmp(argv[i], "-3minuniques") == 0) { min_uniques = 3; } if (stricmp(argv[i], "-minuniques3") == 0) { min_uniques = 3; } if (stricmp(argv[i], "-min3uniques") == 0) { min_uniques = 3; }
   if (stricmp(argv[i], "-4minuniques") == 0) { min_uniques = 4; } if (stricmp(argv[i], "-minuniques4") == 0) { min_uniques = 4; } if (stricmp(argv[i], "-min4uniques") == 0) { min_uniques = 4; }
   if (stricmp(argv[i], "-5minuniques") == 0) { min_uniques = 5; } if (stricmp(argv[i], "-minuniques5") == 0) { min_uniques = 5; } if (stricmp(argv[i], "-min5uniques") == 0) { min_uniques = 5; }
   if (stricmp(argv[i], "-6minuniques") == 0) { min_uniques = 6; } if (stricmp(argv[i], "-minuniques6") == 0) { min_uniques = 6; } if (stricmp(argv[i], "-min6uniques") == 0) { min_uniques = 6; }
   if (stricmp(argv[i], "-7minuniques") == 0) { min_uniques = 7; } if (stricmp(argv[i], "-minuniques7") == 0) { min_uniques = 7; } if (stricmp(argv[i], "-min7uniques") == 0) { min_uniques = 7; }
   if (stricmp(argv[i], "-8minuniques") == 0) { min_uniques = 8; } if (stricmp(argv[i], "-minuniques8") == 0) { min_uniques = 8; } if (stricmp(argv[i], "-min8uniques") == 0) { min_uniques = 8; }
   if (stricmp(argv[i], "-startswithA") == 0) { slot1_start_at = 0; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithB") == 0) { slot1_start_at = 1; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithC") == 0) { slot1_start_at = 2; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithD") == 0) { slot1_start_at = 3; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithE") == 0) { slot1_start_at = 4; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithF") == 0) { slot1_start_at = 5; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithG") == 0) { slot1_start_at = 6; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithH") == 0) { slot1_start_at = 7; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithI") == 0) { slot1_start_at = 8; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithJ") == 0) { slot1_start_at = 9; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithK") == 0) { slot1_start_at = 10; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithL") == 0) { slot1_start_at = 11; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithM") == 0) { slot1_start_at = 12; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithN") == 0) { slot1_start_at = 13; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithO") == 0) { slot1_start_at = 14; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithP") == 0) { slot1_start_at = 15; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithQ") == 0) { slot1_start_at = 16; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithR") == 0) { slot1_start_at = 17; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithS") == 0) { slot1_start_at = 18; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithT") == 0) { slot1_start_at = 19; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithU") == 0) { slot1_start_at = 20; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithV") == 0) { slot1_start_at = 21; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithW") == 0) { slot1_start_at = 22; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithX") == 0) { slot1_start_at = 23; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithY") == 0) { slot1_start_at = 24; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithZ") == 0) { slot1_start_at = 25; starts_with_letter = true; }
   if (stricmp(argv[i], "-start") == 0) { make_next_start_at = true; make_next_start_at_cnt = i; }
   if (stricmp(argv[i], "-stop") == 0) { make_next_stop_at = true; make_next_stop_at_cnt = i; }
   if ((make_next_start_at) && (i == (make_next_start_at_cnt+1))) { std::istringstream str_to_num(argv[i]); str_to_num >> start_at; if (!str_to_num) {std::cout << "ERROR: start is not a number" << std::endl; return 1;} make_next_start_at = false; }
   if ((make_next_stop_at) && (i == (make_next_stop_at_cnt+1))) { std::istringstream str_to_num(argv[i]); str_to_num >> stop_at; if (!str_to_num) {std::cout << "ERROR: stop is not a number" << std::endl; return 1;} make_next_stop_at = false; }
  }
 }
 if ((stop_at !=0) && (stop_at <= start_at)) { std::cout << "ERROR: stop must be greater than start" << std::endl; return 1; }

 if (start_at >= 74329483686) { slot1_start_at = 25; }
 else if (start_at >= 70738885977) { slot1_start_at = 24; }
 else if (start_at >= 67514933959) { slot1_start_at = 23; }
 else if (start_at >= 64453687760) { slot1_start_at = 22; }
 else if (start_at >= 61544615027) { slot1_start_at = 21; }
 else if (start_at >= 58788024687) { slot1_start_at = 20; }
 else if (start_at >= 55980025553) { slot1_start_at = 19; }
 else if (start_at >= 53120609921) { slot1_start_at = 18; }
 else if (start_at >= 50230593304) { slot1_start_at = 17; }
 else if (start_at >= 47320186619) { slot1_start_at = 16; }
 else if (start_at >= 44399600200) { slot1_start_at = 15; }
 else if (start_at >= 41479044927) { slot1_start_at = 14; }
 else if (start_at >= 38558504953) { slot1_start_at = 13; }
 else if (start_at >= 35637964332) { slot1_start_at = 12; }
 else if (start_at >= 32717424360) { slot1_start_at = 11; }
 else if (start_at >= 29796869091) { slot1_start_at = 10; }
 else if (start_at >= 26876281381) { slot1_start_at = 9; }
 else if (start_at >= 23965905295) { slot1_start_at = 8; }
 else if (start_at >= 21075951649) { slot1_start_at = 7; }
 else if (start_at >= 18196143444) { slot1_start_at = 6; }
 else if (start_at >= 15347313630) { slot1_start_at = 5; }
 else if (start_at >= 12549894660) { slot1_start_at = 4; }
 else if (start_at >= 9589371222) { slot1_start_at = 3; }
 else if (start_at >= 6476657624) { slot1_start_at = 2; }
 else if (start_at >= 3416564235) { slot1_start_at = 1; }

 const int MAX_LENGTH = 8;
 char alpha_chars[MAX_LENGTH];
 for (int i=0;i<MAX_LENGTH;++i) { alpha_chars[i] = 'A'; }
 char possible_chars[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 int possible_chars_freq[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int possible_chars_length = sizeof(possible_chars);
 if (use_lower) {for (int i=0;i<possible_chars_length;++i) { possible_chars[i] = tolower(possible_chars[i]); }}
 if (use_upper) {for (int i=0;i<possible_chars_length;++i) { possible_chars[i] = toupper(possible_chars[i]); }}
 int random_number = 0;
 int unique_count = 0;
 unsigned long long int counter = 0;
 unsigned long long int uniques_counter[MAX_LENGTH];
 for (int i=0;i<MAX_LENGTH;++i) { uniques_counter[i] = 0; }
 slot1_stop_at = possible_chars_length;
 if (starts_with_letter == true) { slot1_stop_at = slot1_start_at + 1; }

 // generate random combinations
 if (output_random) {
  for (unsigned long long int j=0;j<208827064576;++j) {
   possible_chars_freq[0]=possible_chars_freq[1]=possible_chars_freq[2]=possible_chars_freq[3]=possible_chars_freq[4]=possible_chars_freq[5]=possible_chars_freq[6]=possible_chars_freq[7]=possible_chars_freq[8]=possible_chars_freq[9]=possible_chars_freq[10]=possible_chars_freq[11]=possible_chars_freq[12]=possible_chars_freq[13]=possible_chars_freq[14]=possible_chars_freq[15]=possible_chars_freq[16]=possible_chars_freq[17]=possible_chars_freq[18]=possible_chars_freq[19]=possible_chars_freq[20]=possible_chars_freq[21]=possible_chars_freq[22]=possible_chars_freq[23]=possible_chars_freq[24]=possible_chars_freq[25]=0;
   for(int i=0;i<MAX_LENGTH;++i) {
    random_number = rand() % possible_chars_length;
    if ((no_io==true) && ((random_number==8)||(random_number==14))) { while ((random_number==8) || (random_number==14)) { random_number = rand() % possible_chars_length; } }
    alpha_chars[i] = possible_chars[random_number];
    ++possible_chars_freq[random_number];
   }
   if ((possible_chars_freq[0]>3)||(possible_chars_freq[1]>3)||(possible_chars_freq[2]>3)||(possible_chars_freq[3]>3)||(possible_chars_freq[4]>3)||(possible_chars_freq[5]>3)||(possible_chars_freq[6]>3)||(possible_chars_freq[7]>3)||(possible_chars_freq[8]>3)||(possible_chars_freq[9]>3)||(possible_chars_freq[10]>3)||(possible_chars_freq[11]>3)||(possible_chars_freq[12]>3)||(possible_chars_freq[13]>3)||(possible_chars_freq[14]>3)||(possible_chars_freq[15]>3)||(possible_chars_freq[16]>3)||(possible_chars_freq[17]>3)||(possible_chars_freq[18]>3)||(possible_chars_freq[19]>3)||(possible_chars_freq[20]>3)||(possible_chars_freq[21]>3)||(possible_chars_freq[22]>3)||(possible_chars_freq[23]>3)||(possible_chars_freq[24]>3)||(possible_chars_freq[25]>3)) { continue; } // each character cannot appear more than 3 times
   unique_count = ((possible_chars_freq[0]!=0)?1:0) + ((possible_chars_freq[1]!=0)?1:0) + ((possible_chars_freq[2]!=0)?1:0) + ((possible_chars_freq[3]!=0)?1:0) + ((possible_chars_freq[4]!=0)?1:0) + ((possible_chars_freq[5]!=0)?1:0) + ((possible_chars_freq[6]!=0)?1:0) + ((possible_chars_freq[7]!=0)?1:0) + ((possible_chars_freq[8]!=0)?1:0) + ((possible_chars_freq[9]!=0)?1:0) + ((possible_chars_freq[10]!=0)?1:0) + ((possible_chars_freq[11]!=0)?1:0) + ((possible_chars_freq[12]!=0)?1:0) + ((possible_chars_freq[13]!=0)?1:0) + ((possible_chars_freq[14]!=0)?1:0) + ((possible_chars_freq[15]!=0)?1:0) + ((possible_chars_freq[16]!=0)?1:0) + ((possible_chars_freq[17]!=0)?1:0) + ((possible_chars_freq[18]!=0)?1:0) + ((possible_chars_freq[19]!=0)?1:0) + ((possible_chars_freq[20]!=0)?1:0) + ((possible_chars_freq[21]!=0)?1:0) + ((possible_chars_freq[22]!=0)?1:0) + ((possible_chars_freq[23]!=0)?1:0) + ((possible_chars_freq[24]!=0)?1:0) + ((possible_chars_freq[25]!=0)?1:0);
   //if ((unique_count == 6) || (unique_count == 7) || (unique_count == 8)) {
    if (((desired_uniques==0)&&(min_uniques==0)) || ((min_uniques>0)&&(unique_count>=min_uniques)) || ((desired_uniques==6)&&(unique_count==6)) || ((desired_uniques==7)&&(unique_count==7)) || ((desired_uniques==8)&&(unique_count==8))) {
     std::cout << alpha_chars[0] << alpha_chars[1] << alpha_chars[2] << alpha_chars[3] << alpha_chars[4] << alpha_chars[5] << alpha_chars[6] << alpha_chars[7] << std::endl;
    }
   //}
  }
 }
 // generate sequential combinations
 else {
 // ---------------------------------------------------
 // Number of combinations
 // ---------------------------------------------------
 //  # of combos (8-length) = 208,827,064,576 (26^8)
 //  # of combos (8-length) with rules = 79,593,411,812 (38%) (~716 GB)
 //  # of combos (8-length) with rules (8 uniques): 30,485,899,566 (14.6%) (~274 GB)
 //  # of combos (8-length) with rules (7 uniques): 35,360,666,636 (16.9%) (~318 GB)
 //  # of combos (8-length) with rules (6 uniques): 12,245,540,372 (5.9%) (~110 GB)
 //  # of combos (8-length) with rules (5 uniques): 1,451,137,279 (0.7%) (~13 GB)

 // A: 0 to 3416564234
 // B: 3416564235 to 6476657623
 // C: 6476657624 to 9589371221
 // D: 9589371222 to 12549894659
 // E: 12549894660 to 15347313629
 // F: 15347313630 to 18196143443
 // G: 18196143444 to 21075951648
 // H: 21075951649 to 23965905294
 // I: 23965905295 to 26876281380
 // J: 26876281381 to 29796869090
 // K: 29796869091 to 32717424359
 // L: 32717424360 to 35637964331
 // M: 35637964332 to 38558504952
 // N: 38558504953 to 41479044926
 // O: 41479044927 to 44399600199
 // P: 44399600200 to 47320186618
 // Q: 47320186619 to 50230593303
 // R: 50230593304 to 53120609920
 // S: 53120609921 to 55980025552
 // T: 55980025553 to 58788024686
 // U: 58788024687 to 61544615026
 // V: 61544615027 to 64453687759
 // W: 64453687760 to 67514933958
 // X: 67514933959 to 70738885976
 // Y: 70738885977 to 74329483685
 // Z: 74329483686 to 78092106599

 for (int slot1=slot1_start_at;slot1<slot1_stop_at;slot1++) { // SLOT 1
  possible_chars_freq[0]=possible_chars_freq[1]=possible_chars_freq[2]=possible_chars_freq[3]=possible_chars_freq[4]=possible_chars_freq[5]=possible_chars_freq[6]=possible_chars_freq[7]=possible_chars_freq[8]=possible_chars_freq[9]=possible_chars_freq[10]=possible_chars_freq[11]=possible_chars_freq[12]=possible_chars_freq[13]=possible_chars_freq[14]=possible_chars_freq[15]=possible_chars_freq[16]=possible_chars_freq[17]=possible_chars_freq[18]=possible_chars_freq[19]=possible_chars_freq[20]=possible_chars_freq[21]=possible_chars_freq[22]=possible_chars_freq[23]=possible_chars_freq[24]=possible_chars_freq[25]=0;
  alpha_chars[0] = possible_chars[slot1];
  ++possible_chars_freq[slot1];
  if (no_io==true) { if ((slot1==8)||(slot1==14)) { continue; } }

  for (int slot2=0;slot2<possible_chars_length;possible_chars_freq[slot2++]--) { // SLOT 2
   alpha_chars[1] = possible_chars[slot2];
   ++possible_chars_freq[slot2];
   if (slot2==slot1) { continue; } // character 2 is not equal to character 1
   if (slot2==(slot1+1)) { continue; } // character 2 is not +1 to character 1
   if (slot2==(slot1+2)) { continue; } // character 2 is not +2 to character 1
   if (slot2==(slot1+3)) { continue; } // character 2 is not +3 to character 1
   if (slot2==(slot1+4)) { continue; } // character 2 is not +4 to character 1
   if (slot2==(slot1+5)) { continue; } // character 2 is not +5 to character 1
   if (slot2==(slot1-1)) { continue; } // character 2 is not -1 to character 1
   //if (slot2==(slot1-2)) { continue; } // character 2 is not -2 to character 1 (disproven)
   if (slot2==(slot1-3)) { continue; } // character 2 is not -3 to character 1
   if (slot2==(slot1-4)) { continue; } // character 2 is not -4 to character 1
   //if (slot2==(slot1-5)) { continue; } // character 2 is not -5 to character 1 (disproven)
   if (no_io==true) { if ((slot2==8)||(slot2==14)) { continue; } }

   for (int slot3=0;slot3<possible_chars_length;possible_chars_freq[slot3++]--) { // SLOT 3
    alpha_chars[2] = possible_chars[slot3];
    ++possible_chars_freq[slot3];
    if ((slot2==(slot1+1))&&(slot3==(slot2+1))) { continue; }       // no 3 characters in a row can be sequential
    if ((slot2==(slot1-1))&&(slot3==(slot2-1))) { continue; }       // no 3 characters in a row can be reverse sequential
    if ((slot3==slot2)&&(slot2==slot1)) { continue; }               // no 3 characters in a row can be identical
    if (slot3==slot2) { continue; } // character 3 is not equal to character 2
    //if (slot3==(slot2+1)) { continue; } // character 3 is not +1 to character 2 (disproven)
    if (slot3==(slot2+2)) { continue; } // character 3 is not +2 to character 2
    if (slot3==(slot2+3)) { continue; } // character 3 is not +3 to character 2
    if (slot3==(slot2+4)) { continue; } // character 3 is not +4 to character 2
    if (slot3==(slot2+5)) { continue; } // character 3 is not +5 to character 2
    //if (slot3==(slot2-1)) { continue; } // character 3 is not -1 to character 2 (disproven)
    if (slot3==(slot2-2)) { continue; } // character 3 is not -2 to character 2
    //if (slot3==(slot2-3)) { continue; } // character 3 is not -3 to character 2 (disproven)
    if (slot3==(slot2-4)) { continue; } // character 3 is not -4 to character 2
    if (slot3==(slot2-5)) { continue; } // character 3 is not -5 to character 2
    if (slot3==slot1) { continue; } // character 3 is not equal to character 1
    //if (slot3==(slot1+1)) { continue; } // character 3 is not +1 to character 1 (disproven)
    if (slot3==(slot1+2)) { continue; } // character 3 is not +2 to character 1
    if (slot3==(slot1-1)) { continue; } // character 3 is not -1 to character 1
    //if (slot3==(slot1-2)) { continue; } // character 3 is not -2 to character 1 (disproven)
    if (no_io==true) { if ((slot3==8)||(slot3==14)) { continue; } }

    for (int slot4=0;slot4<possible_chars_length;possible_chars_freq[slot4++]--) { // SLOT 4
     alpha_chars[3] = possible_chars[slot4];
     if (++possible_chars_freq[slot4] > 3) { continue; }            // each character cannot appear more than 3 times
     if ((slot1==slot3)&&(slot2==slot4)) { continue; }              // characters 1 and 3, and 2 and 4 are not identical
     if ((slot1==slot3)&&(slot3==slot4)) { continue; }              // characters 1 and 3 and 4 are not identical
     if ((slot3==(slot2+1))&&(slot4==(slot3+1))) { continue; }      // no 3 characters in a row can be sequential
     if ((slot3==(slot2-1))&&(slot4==(slot3-1))) { continue; }      // no 3 characters in a row can be reverse sequential
     if ((slot4==slot3)&&(slot3==slot2)) { continue; }              // no 3 characters in a row can be identical
     if (no_io==true) { if ((slot4==8)||(slot4==14)) { continue; } }

     for (int slot5=0;slot5<possible_chars_length;possible_chars_freq[slot5++]--) { // SLOT 5
      alpha_chars[4] = possible_chars[slot5];
      if (++possible_chars_freq[slot5] > 3) { continue; }           // each character cannot appear more than 3 times
      if ((slot4==(slot3+1))&&(slot5==(slot4+1))) { continue; }     // no 3 characters in a row can be sequential
      if ((slot4==(slot3-1))&&(slot5==(slot4-1))) { continue; }     // no 3 characters in a row can be reverse sequential
      if ((slot5==slot4)&&(slot4==slot3)) { continue; }             // no 3 characters in a row can be identical
      if (slot5==slot4) { continue; } // character 5 is not equal to character 4
      if (slot5==slot1) { continue; } // character 5 is not equal to character 1
      if (no_io==true) { if ((slot5==8)||(slot5==14)) { continue; } }

      for (int slot6=0;slot6<possible_chars_length;possible_chars_freq[slot6++]--) { // SLOT 6
       alpha_chars[5] = possible_chars[slot6];
       if (++possible_chars_freq[slot6] > 3) { continue; }          // each character cannot appear more than 3 times
       if ((slot3==slot5)&&(slot4==slot6)) { continue; }            // characters 3 and 5, and 4 and 6 are not identical
       if ((slot5==(slot4+1))&&(slot6==(slot5+1))) { continue; }    // no 3 characters in a row can be sequential
       if ((slot5==(slot4-1))&&(slot6==(slot5-1))) { continue; }    // no 3 characters in a row can be reverse sequential
       if ((slot6==slot5)&&(slot5==slot4)) { continue; }            // no 3 characters in a row can be identical
       if (no_io==true) { if ((slot6==8)||(slot6==14)) { continue; } }

       for (int slot7=0;slot7<possible_chars_length;possible_chars_freq[slot7++]--) { // SLOT 7
        alpha_chars[6] = possible_chars[slot7];
        if (++possible_chars_freq[slot7] > 3) { continue; }         // each character cannot appear more than 3 times
        if ((slot6==(slot5+1))&&(slot7==(slot6+1))) { continue; }   // no 3 characters in a row can be sequential
        if ((slot6==(slot5-1))&&(slot7==(slot6-1))) { continue; }   // no 3 characters in a row can be reverse sequential
        if ((slot7==slot6)&&(slot6==slot5)) { continue; }           // no 3 characters in a row can be identical
        if (no_io==true) { if ((slot7==8)||(slot7==14)) { continue; } }

        for (int slot8=0;slot8<possible_chars_length;possible_chars_freq[slot8++]--) { // SLOT 8
         alpha_chars[7] = possible_chars[slot8];
         if (++possible_chars_freq[slot8] > 3) { continue; }        // each character cannot appear more than 3 times
         if ((slot7==(slot6+1))&&(slot8==(slot7+1))) { continue; }  // no 3 characters in a row can be sequential
         if ((slot7==(slot6-1))&&(slot8==(slot7-1))) { continue; }  // no 3 characters in a row can be reverse sequential
         if ((slot8==slot7)&&(slot7==slot6)) { continue; }          // no 3 characters in a row can be identical
         if ((slot2==slot3)&&(slot3==slot8)) { continue; } // characters 2, 3 and 8 cannot be identical
         if (slot8==slot6) { continue; } // character 8 is not equal to character 6
         if (no_io==true) { if ((slot8==8)||(slot8==14)) { continue; } }
         unique_count = ((possible_chars_freq[0]!=0)?1:0) + ((possible_chars_freq[1]!=0)?1:0) + ((possible_chars_freq[2]!=0)?1:0) + ((possible_chars_freq[3]!=0)?1:0) + ((possible_chars_freq[4]!=0)?1:0) + ((possible_chars_freq[5]!=0)?1:0) + ((possible_chars_freq[6]!=0)?1:0) + ((possible_chars_freq[7]!=0)?1:0) + ((possible_chars_freq[8]!=0)?1:0) + ((possible_chars_freq[9]!=0)?1:0) + ((possible_chars_freq[10]!=0)?1:0) + ((possible_chars_freq[11]!=0)?1:0) + ((possible_chars_freq[12]!=0)?1:0) + ((possible_chars_freq[13]!=0)?1:0) + ((possible_chars_freq[14]!=0)?1:0) + ((possible_chars_freq[15]!=0)?1:0) + ((possible_chars_freq[16]!=0)?1:0) + ((possible_chars_freq[17]!=0)?1:0) + ((possible_chars_freq[18]!=0)?1:0) + ((possible_chars_freq[19]!=0)?1:0) + ((possible_chars_freq[20]!=0)?1:0) + ((possible_chars_freq[21]!=0)?1:0) + ((possible_chars_freq[22]!=0)?1:0) + ((possible_chars_freq[23]!=0)?1:0) + ((possible_chars_freq[24]!=0)?1:0) + ((possible_chars_freq[25]!=0)?1:0);

/*
         ++counter;
         if (unique_count == 8) { ++uniques_counter[7]; }
         if (unique_count == 7) { ++uniques_counter[6]; }
         if (unique_count == 6) { ++uniques_counter[5]; }
         if (unique_count == 5) { ++uniques_counter[4]; }
         if (unique_count == 4) { ++uniques_counter[3]; }
         if (unique_count == 3) { ++uniques_counter[2]; }
         if (unique_count == 2) { ++uniques_counter[1]; }
         if (unique_count == 1) { ++uniques_counter[0]; }
*/

         if (((desired_uniques==0)&&(min_uniques==0)) || ((min_uniques>0)&&(unique_count>=min_uniques)) || ((desired_uniques>0)&&(desired_uniques==unique_count))) {
          //if ((unique_count==6) || (unique_count==7) || (unique_count==8)) {
           ++counter;
           if (counter >= start_at) {
            if ((stop_at > 0) && (counter >= stop_at)) { return 0; }
            std::cout << alpha_chars[0] << alpha_chars[1] << alpha_chars[2] << alpha_chars[3] << alpha_chars[4] << alpha_chars[5] << alpha_chars[6] << alpha_chars[7] << std::endl;
           }
          //}
          //if ((alpha_chars[0]=='Q') && (alpha_chars[1]=='Y') && (alpha_chars[2]=='R') && (alpha_chars[3]=='X') && (alpha_chars[4]=='A') && (alpha_chars[5]=='P') && (alpha_chars[6]=='W') && (alpha_chars[7]=='T')) { std::cout << "FOUND" << std::endl; return 0; }
         }


        }
       }
      }
     }
    }
   }
  }
 }
 }

/*
// debugging info
std::cout << "counter: " << counter << std::endl;
std::cout << "uniques_counter[0]: " << uniques_counter[0] << std::endl;
std::cout << "uniques_counter[1]: " << uniques_counter[1] << std::endl;
std::cout << "uniques_counter[2]: " << uniques_counter[2] << std::endl;
std::cout << "uniques_counter[3]: " << uniques_counter[3] << std::endl;
std::cout << "uniques_counter[4]: " << uniques_counter[4] << std::endl;
std::cout << "uniques_counter[5]: " << uniques_counter[5] << std::endl;
std::cout << "uniques_counter[6]: " << uniques_counter[6] << std::endl;
std::cout << "uniques_counter[7]: " << uniques_counter[7] << std::endl;
*/

 return 0;
}