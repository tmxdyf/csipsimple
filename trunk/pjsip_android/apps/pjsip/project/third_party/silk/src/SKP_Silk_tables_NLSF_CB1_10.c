/***********************************************************************
Copyright (c) 2006-2010, Skype Limited. All rights reserved. 
Redistribution and use in source and binary forms, with or without 
modification, (subject to the limitations in the disclaimer below) 
are permitted provided that the following conditions are met:
- Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.
- Neither the name of Skype Limited, nor the names of specific 
contributors, may be used to endorse or promote products derived from 
this software without specific prior written permission.
NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED 
BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
CONTRIBUTORS ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND 
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF 
USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***********************************************************************/

/**********************************************/
/* This file has been automatically generated */
/*                                            */
/* ROM usage:  0.19 + 1.61 kB                 */
/**********************************************/

#include "SKP_Silk_structs.h"
#include "SKP_Silk_tables_NLSF_CB1_10.h"

const SKP_uint16 SKP_Silk_NLSF_MSVQ_CB1_10_CDF[ NLSF_MSVQ_CB1_10_VECTORS + NLSF_MSVQ_CB1_10_STAGES ] =
{
            0,
        17096,
        24130,
        28997,
        33179,
        36696,
        40213,
        42493,
        44252,
        45973,
        47551,
        49095,
        50542,
        51898,
        53196,
        54495,
        55685,
        56851,
        57749,
        58628,
        59435,
        60207,
        60741,
        61220,
        61700,
        62179,
        62659,
        63138,
        63617,
        64097,
        64576,
        65056,
        65535,
            0,
        20378,
        33032,
        40395,
        46721,
        51707,
        56585,
        61157,
        65535,
            0,
        15055,
        25472,
        35447,
        42501,
        48969,
        54773,
        60212,
        65535,
            0,
        12069,
        22440,
        32812,
        40145,
        46870,
        53595,
        59630,
        65535,
            0,
        10839,
        19954,
        27957,
        35961,
        43965,
        51465,
        58805,
        65535,
            0,
         8933,
        17674,
        26415,
        34785,
        42977,
        50820,
        58496,
        65535
};

const SKP_uint16 * const SKP_Silk_NLSF_MSVQ_CB1_10_CDF_start_ptr[ NLSF_MSVQ_CB1_10_STAGES ] =
{
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[   0 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  33 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  42 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  51 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  60 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  69 ]
};

const SKP_int SKP_Silk_NLSF_MSVQ_CB1_10_CDF_middle_idx[ NLSF_MSVQ_CB1_10_STAGES ] =
{
       5,
       3,
       4,
       4,
       5,
       5
};

const SKP_int16 SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q5[ NLSF_MSVQ_CB1_10_VECTORS ] =
{
               62,              103,
              120,              127,
              135,              135,
              155,              167,
              168,              172,
              173,              176,
              179,              181,
              181,              185,
              186,              198,
              199,              203,
              205,              222,
              227,              227,
              227,              227,
              227,              227,
              227,              227,
              227,              227,
               54,               76,
              101,              108,
              119,              120,
              123,              125,
               68,               85,
               87,              103,
              107,              112,
              115,              116,
               78,               85,
               85,              101,
              105,              105,
              110,              111,
               83,               91,
               97,               97,
               97,              100,
              101,              105,
               92,               93,
               93,               95,
               96,               98,
               99,              103
};

const SKP_int SKP_Silk_NLSF_MSVQ_CB1_10_ndelta_min_Q15[ 10 + 1 ] =
{
              462,
                3,
               64,
               74,
               98,
               50,
               97,
               68,
              120,
               53,
              639
};

const SKP_int16 SKP_Silk_NLSF_MSVQ_CB1_10_Q15[ 10 * NLSF_MSVQ_CB1_10_VECTORS ] =
{
             1877,             4646,
             7712,            10745,
            13964,            17028,
            20239,            23182,
            26471,            29287,
             1612,             3278,
             7086,             9975,
            13228,            16264,
            19596,            22690,
            26037,            28965,
             2169,             3830,
             6460,             8958,
            11960,            14750,
            18408,            21659,
            25018,            28043,
             3680,             6024,
             8986,            12256,
            15201,            18188,
            21741,            24460,
            27484,            30059,
             2584,             5187,
             7799,            10902,
            13179,            15765,
            19017,            22431,
            25891,            28698,
             3731,             5751,
             8650,            11742,
            15090,            17407,
            20391,            23421,
            26228,            29247,
             2107,             6323,
             8915,            12226,
            14775,            17791,
            20664,            23679,
            26829,            29353,
             1677,             2870,
             5386,             8077,
            11817,            15176,
            18657,            22006,
            25513,            28689,
             2111,             3625,
             7027,            10588,
            14059,            17193,
            21137,            24260,
            27577,            30036,
             2428,             4010,
             5765,             9376,
            13805,            15821,
            19444,            22389,
            25295,            29310,
             2256,             4628,
             8377,            12441,
            15283,            19462,
            22257,            25551,
            28432,            30304,
             2352,             3675,
             6129,            11868,
            14551,            16655,
            19624,            21883,
            26526,            28849,
             5243,             7248,
            10558,            13269,
            15651,            17919,
            21141,            23827,
            27102,            29519,
             4422,             6725,
            10449,            13273,
            16124,            19921,
            22826,            26061,
            28763,            30583,
             4508,             6291,
             9504,            11809,
            13827,            15950,
            19077,            22084,
            25740,            28658,
             2540,             4297,
             8579,            13578,
            16634,            19101,
            21547,            23887,
            26777,            29146,
             3377,             6358,
            10224,            14518,
            17905,            21056,
            23637,            25784,
            28161,            30109,
             4177,             5942,
             8159,            10108,
            12130,            15470,
            20191,            23326,
            26782,            29359,
             2492,             3801,
             6144,             9825,
            16000,            18671,
            20893,            23663,
            25899,            28974,
             3011,             4727,
             6834,            10505,
            12465,            14496,
            17065,            20052,
            25265,            28057,
             4149,             7197,
            12338,            15076,
            18002,            20190,
            22187,            24723,
            27083,            29125,
             2975,             4578,
             6448,             8378,
             9671,            13225,
            19502,            22277,
            26058,            28850,
             4102,             5760,
             7744,             9484,
            10744,            12308,
            14677,            19607,
            24841,            28381,
             4931,             9287,
            12477,            13395,
            13712,            14351,
            16048,            19867,
            24188,            28994,
             4141,             7867,
            13140,            17720,
            20064,            21108,
            21692,            22722,
            23736,            27449,
             4011,             8720,
            13234,            16206,
            17601,            18289,
            18524,            19689,
            23234,            27882,
             3420,             5995,
            11230,            15117,
            15907,            16783,
            17762,            23347,
            26898,            29946,
             3080,             6786,
            10465,            13676,
            18059,            23615,
            27058,            29082,
            29563,            29905,
             3038,             5620,
             9266,            12870,
            18803,            19610,
            20010,            20802,
            23882,            29306,
             3314,             6420,
             9046,            13262,
            15869,            23117,
            23667,            24215,
            24487,            25915,
             3469,             6963,
            10103,            15282,
            20531,            23240,
            25024,            26021,
            26736,            27255,
             3041,             6459,
             9777,            12896,
            16315,            19410,
            24070,            29353,
            31795,            32075,
             -200,             -134,
             -113,             -204,
             -347,             -440,
             -352,             -211,
             -418,             -172,
             -313,               59,
              495,              772,
              721,              614,
              334,              444,
              225,              242,
              161,               16,
              274,              564,
              -73,             -188,
             -395,             -171,
              777,              508,
             1340,             1145,
              699,              196,
              223,              173,
               90,               25,
              -26,               18,
              133,             -105,
             -360,             -277,
              859,              634,
               41,             -557,
             -768,             -926,
             -601,            -1021,
            -1189,             -365,
              225,              107,
              374,              -50,
              433,              417,
              156,               39,
             -597,            -1397,
            -1594,             -592,
             -485,             -292,
              253,               87,
               -0,               -6,
              -25,             -345,
             -240,              120,
             1261,              946,
              166,             -277,
              241,              167,
              170,              429,
              518,              714,
              602,              254,
              134,               92,
             -152,             -324,
             -394,               49,
             -151,             -304,
             -724,             -657,
             -162,             -369,
              -35,                3,
               -2,             -312,
             -200,              -92,
             -227,              242,
              628,              565,
             -124,             1056,
              770,              101,
              -84,              -33,
                4,             -192,
             -272,                5,
             -627,             -977,
              419,              472,
               53,             -103,
              145,              322,
              -95,              -31,
             -100,             -303,
             -560,            -1067,
             -413,              714,
              283,                2,
             -223,             -367,
              523,              360,
              -38,             -115,
              378,             -591,
             -718,              448,
             -481,             -274,
              180,              -88,
             -581,             -157,
             -696,            -1265,
              394,             -479,
              -23,              124,
              -43,               19,
             -113,             -236,
             -412,             -659,
             -200,                2,
              -69,             -342,
              199,               55,
               58,              -36,
              -51,              -62,
              507,              507,
              427,              442,
               36,              601,
             -141,               68,
              274,              274,
               68,              -12,
               -4,               71,
             -193,             -464,
             -425,             -383,
              408,              203,
             -337,              236,
              410,              -59,
              -25,             -341,
             -449,               28,
               -9,               90,
              332,              -14,
             -905,               96,
             -540,             -242,
              679,              -59,
              192,              -24,
               60,             -217,
                5,              -37,
              179,              -20,
              311,              519,
              274,               72,
             -326,            -1030,
             -262,              213,
              380,               82,
              328,              411,
             -540,              574,
             -283,              151,
              181,             -402,
             -278,             -240,
             -110,             -227,
             -264,              -89,
             -250,             -259,
              -27,              106,
             -239,              -98,
             -390,              118,
               61,              104,
              294,              532,
               92,              -13,
               60,             -233,
              335,              541,
              307,              -26,
             -110,              -91,
             -231,             -460,
              170,              201,
               96,             -372,
              132,              435,
             -302,              216,
             -279,              -41,
               74,              190,
              368,              273,
             -186,             -608,
             -157,              159,
               12,              278,
              245,              307,
               25,             -187,
              -16,               55,
               30,             -163,
              548,             -307,
              106,               -5,
               27,              330,
             -416,              475,
              438,             -235,
              104,              137,
               21,               -5,
             -300,             -468,
              521,             -347,
              170,             -200,
             -219,              308,
             -122,             -133,
              219,              -16,
              359,              412,
              -89,             -111,
               48,              322,
              142,              177,
             -286,             -127,
              -39,              -63,
              -42,             -451,
              160,              308,
              -57,              193,
              -48,               74,
             -346,               59,
              -27,               27,
             -469,             -277,
             -344,              282,
              262,              122,
              171,             -249,
               27,              258,
              188,               -3,
               67,             -206,
             -284,              291,
             -117,              -88,
             -477,              375,
               50,              106,
               99,             -182,
              438,             -376,
             -401,              -49,
              119,              -23,
              -10,              -48,
             -116,             -200,
             -310,              121,
               73,                7,
              237,             -226,
              139,             -456,
              397,               35,
                3,             -108,
              323,              -75,
              332,              198,
              -99,              -21
};

const SKP_Silk_NLSF_CBS SKP_Silk_NLSF_CB1_10_Stage_info[ NLSF_MSVQ_CB1_10_STAGES ] =
{
        {  32, &SKP_Silk_NLSF_MSVQ_CB1_10_Q15[ 10 *   0 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q5[   0 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q15[ 10 *  32 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q5[  32 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q15[ 10 *  40 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q5[  40 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q15[ 10 *  48 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q5[  48 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q15[ 10 *  56 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q5[  56 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q15[ 10 *  64 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q5[  64 ] }
};

const SKP_Silk_NLSF_CB_struct SKP_Silk_NLSF_CB1_10 =
{
        NLSF_MSVQ_CB1_10_STAGES,
        SKP_Silk_NLSF_CB1_10_Stage_info,
        SKP_Silk_NLSF_MSVQ_CB1_10_ndelta_min_Q15,
        SKP_Silk_NLSF_MSVQ_CB1_10_CDF,
        SKP_Silk_NLSF_MSVQ_CB1_10_CDF_start_ptr,
        SKP_Silk_NLSF_MSVQ_CB1_10_CDF_middle_idx
};

