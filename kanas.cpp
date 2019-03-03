#include "pxt.h"
using namespace pxt;

namespace hiragana {

  int32_t alph1 = {0, 950272, 787200, 11512810, 11458282,
        26808627, 11195713, 786432, 476160, 571392,
        332096, 145536, 34816, 135296, 65536,
        1118480, 15254976, 326688, 20632864, 19453760,
        6638562, 31119026, 2274978, 18436880, 11196074,
        9099912, 327680, 43008, 141856, 338240,
        567424, 8935048, 15259214, 16404960, 33215808,
        15255072, 33080768, 33216032, 33182208, 15255206,
        32642016, 18859008, 19449808, 32647712, 32539680,
        32772383, 32772191, 15254976, 33181952, 13192608,
        33182017, 10147392, 17333776, 31492032, 29426780,
        32575583, 28447584, 17046800, 20637216, 1033760,
        17043521, 575456, 278784, 1082401, 532480};

  int32_t kana1 = {8698188, 17365656, 4332680, 4341008, 6436006,
        12903726,1359137,1637921,5444068,9778152,
        10428719,10429424,10845514,11512656,4998718,
        4499408,5023176,5028624,18400831,9742320,
        9316296,29686032,22709316,22709844,18436929,
        9743280,9381165,9381808,17073244,17075088,
        5035710,4501456,4913796,23023760,12629038,
        25224284,12629558,4905604,4905108,1020034,
        32641618,8714504,1352993,18533033,9792837,
        1084288,3293447,7344713,7348371,31761697,
        31761961,31761713,17352284,8693448,8693200,
        4460609,4461129,4460625,11828491,11828499,
        11812635,17451704,17487521,7652387,1091738,
        21976737,4690054,9412876,9741793,18401249,
        9876911,18536127,4904614,918590,15760422,
        32539716,33080895,12854574,25740862,10955754,
        1638073,21681854,18383948,12870974,4690144,
        2497664,12854590,10955762,9938865,10825680,
        8523908, 266304, 266832};

 int32_t hira1 = {5739589, 12494987, 14713094, 31492622, 4633762,
        9233702,5683365,10316201,5741643,12560457,
        10429160,5722480,19720104,28112176,4539936,
        4539440,32515048,15733236,1623840,19457072,
        2418088,11318576,31491106,31491634,8793064,
        12942608,9381800,31782160,4920757,21198000,
        9412773,12461237,9352618,9352528,4330560,
        17319470,8660278,17324849,17324852,27698721,
        27436081,9276906,32524849,23409015,11510119,
        15269391,32518122,32518138,32517618,23889352,
        23889482,23889108,3824643,3677707,3693587,
        4464770,2232905,4464786,32528373,32527861,
        32528377,20840273,20943332,11510826,24553879,
        21976098,4690058,9412948,15875203,32800038,
        3226788,3243337,30594722,29492286,20571958,
        11510241,19457846,5738759,11510023,25141607,
        1793861,9295081,8193058,9233616,4690024,
        231650, 25190400, 25952256, 267328, 267856};

  //%
  int32_t getAlph(int32_t n)
  {
	return alph1[n];
  }
  //%
  int32_t getKana(int32_t n)
  {
	return kana1[n];
  }
  //%
  int32_t getHira(int32_t n)
  {
	return hira1[n];
  }
}
