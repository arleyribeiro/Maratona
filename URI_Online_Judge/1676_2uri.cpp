#include <bits/stdc++.h>
#define TAM 34000
using namespace std;

int main() {

	int mv[TAM]={1,2,3,5,7,11,13,17,23,25,29,37,41,43,47,53,61,67,71,77,83,89,91,97,107,115,119,121,127,131,143,149,157,161,173,175,179,181,193,209,211,221,223,227,233,235,239,247,257,265,277,283,287,301,307,313,329,331,337,341,353,359,361,377,383,389,397,407,415,419,421,431,433,437,445,463,467,475,481,493,497,503,509,517,527,535,541,553,565,577,581,593,595,607,613,617,625,643,647,653,659,667,673,685,691,697,703,707,727,733,749,751,757,775,787,791,797,803,805,811,835,839,841,851,853,857,863,865,881,893,913,929,931,937,941,943,959,961,967,973,991,997,1007,1015,1021,1043,1045,1049,1061,1063,1093,1097,1103,1105,1111,1123,1133,1141,1147,1151,1177,1193,1201,1207,1217,1223,1225,1229,1231,1237,1247,1255,1271,1277,1283,1297,1303,1313,1315,1333,1351,1361,1363,1367,1375,1379,1381,1391,1403,1427,1435,1439,1441,1465,1481,1487,1493,1507,1511,1517,1525,1531,1537,1541,1553,1559,1567,1577,1589,1601,1627,1631,1643,1651,1657,1667,1675,1679,1691,1705,1709,1717,1721,1723,1735,1757,1769,1777,1781,1795,1799,1811,1813,1823,1829,1831,1841,1847,1853,1859,1877,1891,1901,1907,1915,1919,1931,1943,1961,1973,1987,1993,1997,2005,2017,2023,2035,2039,2047,2063,2065,2083,2093,2095,2111,2123,2129,2155,2161,2167,2189,2197,2203,2207,2215,2219,2243,2251,2257,2267,2279,2281,2297,2303,2333,2351,2353,2357,2363,2371,2377,2381,2383,2393,2411,2417,2425,2429,2443,2455,2459,2467,2477,2485,2489,2503,2507,2519,2531,2533,2537,2545,2573,2591,2603,2611,2621,2635,2641,2651,2663,2669,2677,2681,2687,2695,2707,2723,2725,2729,2731,2743,2747,2755,2777,2785,2803,2807,2813,2837,2845,2857,2861,2873,2879,2891,2903,2905,2927,2933,2939,2957,2963,2969,2981,2983,3001,3007,3011,3017,3037,3055,3067,3083,3085,3097,3101,3107,3119,3121,3133,3151,3161,3173,3191,3193,3221,3223,3227,3239,3247,3251,3253,3269,3271,3293,3299,3301,3311,3323,3337,3343,3355,3359,3361,3373,3385,3403,3413,3415,3433,3449,3479,3481,3487,3503,3505,3509,3517,3535,3539,3547,3553,3565,3571,3583,3593,3595,3599,3611,3623,3625,3631,3659,3661,3671,3673,3689,3697,3721,3731,3743,3745,3751,3757,3775,3779,3793,3797,3817,3833,3847,3851,3863,3877,3881,3883,3901,3911,3923,3925,3931,3937,3941,3973,3977,3985,3989,4013,4031,4033,4037,4045,4073,4081,4105,4109,4111,4117,4121,4123,4133,4141,4165,4187,4193,4199,4211,4213,4237,4253,4255,4261,4277,4289,4301,4303,4307,4321,4331,4361,4375,4381,4397,4405,4409,4423,4427,4433,4451,4457,4463,4487,4493,4499,4517,4525,4529,4541,4543,4571,4589,4591,4607,4615,4621,4633,4637,4645,4663,4667,4681,4691,4693,4697,4709,4717,4721,4727,4739,4753,4793,4801,4813,4817,4841,4847,4853,4867,4873,4883,4897,4901,4907,4913,4933,4945,4949,4957,4961,4973,4981,5003,5005,5023,5027,5035,5039,5041,5057,5069,5077,5083,5093,5123,5129,5137,5147,5167,5171,5173,5183,5197,5213,5221,5233,5245,5261,5263,5273,5279,5287,5291,5311,5323,5339,5353,5357,5365,5371,5381,5395,5401,5417,5431,5453,5459,5461,5471,5473,5501,5503,5521,5531,5533,5537,5549,5561,5563,5575,5581,5593,5627,5633,5635,5653,5657,5663,5669,5671,5693,5699,5723,5725,5741,5753,5759,5771,5789,5791,5801,5815,5819,5837,5843,5849,5851,5857,5867,5873,5903,5909,5917,5933,5935,5947,5963,5969,5987,5995,5999,6011,6023,6059,6061,6067,6077,6089,6103,6107,6113,6115,6127,6137,6145,6161,6173,6179,6181,6187,6193,6233,6247,6277,6283,6293,6295,6299,6311,6337,6343,6353,6355,6373,6403,6415,6421,6431,6433,6445,6449,6467,6473,6479,6487,6503,6509,6527,6533,6539,6557,6563,6577,6583,6587,6593,6617,6629,6631,6643,6655,6659,6685,6691,6703,6713,6715,6721,6743,6757,6761,6787,6797,6803,6809,6823,6853,6865,6877,6901,6907,6913,6917,6923,6929,6931,6943,6947,6953,6967,6983,6991,7007,7031,7037,7049,7051,7061,7063,7073,7075,7087,7109,7123,7127,7139,7151,7157,7163,7169,7177,7183,7201,7211,7213,7223,7231,7237,7259,7261,7271,7289,7291,7301,7307,7327,7349,7361,7379,7391,7411,7417,7433,7439,7441,7451,7465,7483,7495,7499,7511,7525,7555,7559,7571,7585,7589,7597,7601,7603,7607,7621,7649,7657,7675,7681,7703,7717,7733,7741,7763,7765,7781,7783,7795,7799,7811,7817,7837,7843,7847,7859,7871,7873,7885,7897,7913,7927,7937,7943,7945,7967,7973,7993,8003,8009,8017,8023,8027,8035,8053,8057,8083,8099,8101,8111,8123,8129,8131,8153,8155,8183,8185,8201,8203,8215,8227,8231,8245,8261,8263,8293,8317,8321,8339,8341,8357,8363,8365,8387,8393,8411,8425,8447,8453,8467,8471,8473,8489,8491,8497,8501,8507,8531,8543,8545,8549,8557,8587,8603,8627,8633,8635,8639,8651,8657,8677,8683,8713,8729,8731,8741,8743,8753,8755,8783,8821,8831,8837,8843,8845,8861,8867,8887,8891,8897,8909,8917,8921,8923,8947,8951,8965,8977,8993,8999,9013,9017,9031,9043,9059,9071,9077,9085,9097,9107,9121,9131,9149,9157,9161,9175,9179,9181,9191,9197,9205,9211,9227,9241,9253,9263,9277,9281,9287,9341,9347,9355,9361,9367,9383,9385,9389,9421,9449,9467,9475,9479,9487,9493,9503,9523,9547,9551,9557,9565,9577,9599,9601,9617,9623,9625,9653,9659,9677,9685,9689,9697,9703,9715,9727,9751,9781,9803,9805,9817,9833,9839,9841,9847,9863,9869,9881,9883,9899,9907,9911,9913,9937,9961,9973,9977,9985,9989,9997,10013,10027,10037,10045,10049,10051,10057,10075,10097,10105,10123,10127,10133,10151,10157,10177,10181,10183,10187,10199,10223,10231,10241,10253,10261,10267,10277,10285,10313,10315,10331,10351,10363,10367,10373,10379,10391,10397,10409,10411,10421,10433,10447,10477,10493,10511,10513,10537,10543,10571,10573,10577,10603,10615,10619,10633,10643,10657,10667,10673,10681,10697,10703,10723,10747,10753,10757,10763,10765,10793,10807,10817,10829,10843,10859,10861,10871,10889,10903,10907,10921,10937,10943,10957,10963,10975,10993,11009,11011,11017,11041,11051,11053,11063,11069,11071,11093,11107,11113,11143,11159,11171,11191,11197,11201,11203,11213,11227,11233,11249,11251,11257,11261,11281,11287,11291,11303,11305,11311,11333,11369,11383,11387,11417,11423,11429,11431,11441,11447,11467,11473,11483,11489,11497,11507,11519,11527,11533,11543,11545,11549,11551,11563,11591,11603,11617,11627,11639,11651,11657,11669,11671,11677,11693,11699,11731,11761,11771,11777,11783,11785,11813,11827,11831,11851,11857,11861,11879,11881,11909,11911,11917,11947,11957,11969,11971,11999,12007,12011,12013,12043,12059,12061,12073,12091,12101,12103,12113,12115,12121,12127,12145,12167,12173,12193,12197,12205,12223,12227,12235,12241,12253,12257,12277,12287,12299,12301,12311,12313,12347,12353,12359,12389,12391,12413,12431,12433,12437,12451,12463,12479,12491,12493,12533,12539,12547,12551,12563,12577,12583,12593,12595,12601,12637,12641,12643,12653,12661,12673,12677,12697,12703,12719,12745,12749,12805,12811,12823,12827,12833,12851,12853,12871,12877,12893,12913,12917,12925,12931,12937,12941,12989,12991,13015,13031,13037,13045,13063,13067,13081,13091,13103,13109,13111,13121,13135,13153,13163,13165,13169,13177,13181,13207,13225,13229,13231,13247,13255,13259,13271,13297,13301,13313,13321,13327,13357,13361,13363,13373,13375,13409,13411,13423,13441,13457,13493,13501,13507,13511,13513,13537,13541,13547,13555,13561,13573,13585,13591,13597,13607,13637,13661,13691,13693,13697,13703,13705,13717,13733,13747,13753,13757,13765,13783,13793,13795,13799,13801,13811,13853,13855,13861,13873,13877,13883,13885,13927,13949,13957,13967,13987,13993,14003,14005,14021,14039,14047,14069,14071,14081,14083,14093,14095,14099,14113,14117,14143,14153,14171,14173,14201,14219,14221,14249,14257,14279,14305,14309,14317,14323,14327,14341,14347,14363,14381,14383,14395,14407,14411,14423,14431,14473,14483,14485,14489,14503,14513,14519,14533,14557,14561,14563,14605,14611,14623,14647,14663,14671,14677,14683,14693,14699,14701,14711,14723,14729,14741,14771,14777,14801,14803,14819,14827,14849,14851,14857,14867,14873,14893,14909,14939,14947,14951,14953,14965,14987,15001,15007,15037,15059,15067,15085,15107,15113,15121,15131,15133,15137,15143,15145,15157,15161,15175,15187,15193,15197,15203,15221,15227,15247,15251,15263,15269,15271,15293,15317,15329,15331,15355,15367,15383,15385,15391,15403,15413,15449,15461,15475,15491,15503,15517,15533,15535,15539,15541,15557,15569,15595,15611,15617,15631,15637,15643,15661,15671,15673,15689,15707,15713,15719,15721,15737,15749,15761,15767,15773,15787,15805,15811,15823,15833,15847,15851,15853,15857,15865,15895,15923,15925,15929,15953,15955,15973,15977,15989,15997,16007,16031,16037,16043,16063,16075,16079,16105,16127,16139,16171,16183,16193,16211,16217,16223,16231,16243,16259,16261,16267,16285,16289,16313,16315,16331,16363,16367,16375,16393,16397,16405,16417,16423,16427,16433,16441,16495,16501,16537,16547,16553,16555,16559,16567,16573,16583,16601,16603,16607,16627,16633,16645,16657,16663,16681,16687,16691,16697,16711,16741,16747,16763,16783,16787,16793,16795,16799,16811,16843,16847,16861,16871,16889,16891,16921,16927,16933,16945,16951,16973,16979,16981,16987,17009,17035,17051,17053,17063,17071,17081,17099,17129,17159,17161,17177,17183,17185,17197,17203,17213,17233,17263,17267,17273,17281,17309,17317,17321,17323,17327,17351,17369,17371,17377,17393,17407,17423,17425,17431,17441,17443,17447,17455,17459,17503,17507,17533,17545,17549,17557,17581,17611,17627,17635,17639,17641,17657,17663,17681,17687,17707,17711,17723,17731,17743,17747,17759,17785,17789,17791,17797,17801,17807,17813,17837,17845,17849,17879,17887,17891,17893,17897,17917,17927,17939,17941,17947,17953,17977,17999,18011,18017,18031,18037,18061,18071,18073,18077,18107,18115,18127,18133,18137,18179,18187,18221,18239,18241,18253,18257,18271,18283,18299,18311,18317,18323,18325,18347,18359,18377,18397,18415,18431,18437,18445,18463,18481,18497,18521,18533,18551,18557,18571,18577,18581,18601,18607,18623,18629,18637,18653,18661,18673,18689,18707,18737,18767,18773,18787,18791,18809,18817,18821,18847,18851,18863,18865,18887,18895,18899,18911,18913,18929,18953,18955,18961,18973,18997,19007,19015,19033,19043,19049,19061,19075,19097,19103,19109,19121,19123,19135,19151,19165,19177,19181,19183,19187,19201,19229,19231,19253,19261,19271,19285,19297,19303,19315,19331,19337,19363,19367,19373,19391,19393,19397,19411,19435,19439,19453,19463,19465,19471,19487,19523,19525,19541,19553,19555,19571,19573,19585,19601,19607,19613,19621,19627,19631,19661,19663,19681,19703,19705,19711,19727,19735,19751,19757,19765,19783,19793,19801,19807,19813,19817,19829,19847,19861,19871,19873,19901,19919,19921,19943,19949,19961,19973,19975,19987,20005,20011,20023,20051,20065,20069,20081,20083,20123,20153,20171,20197,20201,20203,20207,20213,20233,20237,20251,20257,20261,20287,20333,20335,20339,20347,20357,20363,20383,20411,20425,20441,20453,20459,20467,20497,20501,20503,20515,20519,20537,20545,20551,20567,20597,20617,20621,20633,20635,20677,20681,20683,20687,20699,20707,20713,20729,20731,20741,20759,20767,20777,20789,20813,20815,20863,20881,20887,20897,20905,20917,20921,20923,20935,20947,20957,20963,20995,20999,21025,21037,21047,21055,21073,21101,21115,21119,21121,21127,21143,21145,21173,21179,21187,21203,21211,21223,21227,21239,21247,21257,21263,21271,21277,21311,21313,21317,21325,21331,21341,21353,21367,21385,21389,21391,21403,21431,21449,21457,21475,21481,21487,21493,21503,21511,21523,21553,21581,21607,21625,21629,21643,21659,21671,21673,21683,21697,21703,21745,21751,21763,21773,21779,21791,21811,21823,21835,21839,21851,21863,21869,21917,21923,21929,21947,21959,21961,21967,21973,21983,21989,21997,22015,22019,22043,22051,22063,22073,22075,22087,22091,22103,22123,22133,22141,22151,22181,22199,22211,22225,22229,22231,22247,22277,22327,22331,22361,22363,22367,22375,22379,22391,22393,22417,22427,22447,22457,22471,22481,22495,22499,22507,22525,22541,22547,22553,22561,22571,22573,22585,22591,22621,22631,22637,22643,22645,22663,22697,22709,22717,22727,22741,22747,22753,22757,22769,22787,22799,22801,22811,22829,22831,22841,22853,22859,22861,22873,22885,22901,22931,22943,22979,22981,22991,22997,23005,23009,23017,23021,23033,23041,23051,23069,23071,23087,23093,23101,23113,23125,23129,23147,23171,23173,23189,23207,23215,23219,23227,23231,23261,23293,23305,23309,23311,23335,23357,23371,23381,23393,23407,23417,23431,23437,23441,23485,23489,23515,23519,23545,23549,23557,23561,23603,23611,23617,23627,23665,23695,23701,23707,23729,23741,23743,23747,23755,23771,23773,23777,23797,23827,23851,23861,23863,23875,23887,23891,23897,23903,23911,23917,23923,23933,23935,23951,23953,23963,23983,23995,24001,24017,24029,24043,24047,24059,24061,24073,24085,24107,24115,24127,24143,24145,24173,24179,24187,24191,24203,24211,24233,24241,24247,24253,24257,24271,24277,24293,24317,24329,24343,24355,24361,24383,24389,24397,24415,24431,24433,24443,24449,24493,24503,24521,24527,24539,24541,24563,24569,24583,24613,24617,24623,24625,24641,24667,24673,24685,24691,24701,24703,24715,24749,24757,24773,24797,24803,24809,24821,24823,24847,24857,24883,24899,24913,24929,24931,24947,24955,24959,24961,24967,24977,25003,25015,25019,25051,25057,25079,25087,25109,25121,25123,25135,25139,25147,25157,25171,25195,25199,25241,25247,25255,25261,25277,25283,25297,25307,25319,25331,25333,25345,25381,25403,25423,25433,25435,25457,25463,25481,25483,25487,25493,25517,25525,25529,25531,25577,25583,25589,25607,25615,25619,25649,25667,25673,25703,25721,25741,25747,25777,25795,25813,25817,25823,25825,25831,25843,25867,25873,25897,25907,25931,25937,25957,25961,25963,25973,25987,26011,26017,26023,26027,26033,26039,26051,26053,26077,26083,26107,26113,26117,26123,26137,26143,26155,26173,26183,26197,26201,26233,26243,26245,26251,26261,26275,26293,26311,26321,26323,26341,26357,26365,26371,26383,26395,26399,26407,26417,26437,26447,26455,26461,26471,26485,26501,26503,26521,26531,26533,26543,26549,26551,26557,26563,26579,26581,26587,26591,26617,26633,26665,26695,26699,26737,26741,26743,26759,26773,26797,26813,26821,26827,26831,26837,26845,26851,26857,26867,26875,26903,26905,26921,26927,26935,26941,26971,26983,27001,27013,27029,27053,27059,27061,27067,27077,27083,27085,27091,27113,27143,27161,27173,27179,27187,27209,27211,27251,27263,27265,27271,27283,27329,27337,27341,27347,27361,27367,27371,27373,27389,27427,27449,27457,27461,27473,27503,27505,27521,27527,27551,27553,27571,27581,27587,27611,27629,27637,27643,27653,27671,27689,27691,27697,27703,27713,27719,27737,27787,27797,27809,27835,27847,27877,27887,27893,27901,27925,27943,27953,27967,27983,27991,28001,28003,28013,28031,28045,28061,28073,28075,28079,28087,28091,28097,28117,28139,28141,28153,28157,28169,28183,28193,28207,28237,28241,28261,28267,28271,28273,28283,28313,28315,28319,28367,28373,28387,28397,28411,28421,28423,28439,28483,28493,28507,28517,28525,28553,28561,28571,28583,28589,28601,28613,28621,28627,28631,28633,28651,28657,28661,28667,28675,28679,28705,28709,28717,28753,28763,28765,28771,28781,28783,28795,28807,28823,28825,28841,28861,28873,28877,28919,28937,28945,28949,28951,28957,28963,28981,29017,29021,29047,29051,29069,29081,29099,29107,29111,29113,29129,29131,29147,29155,29159,29183,29203,29227,29245,29273,29279,29281,29297,29305,29309,29311,29323,29369,29377,29393,29395,29399,29423,29425,29437,29443,29455,29489,29501,29503,29519,29531,29533,29573,29593,29609,29627,29633,29635,29647,29663,29671,29677,29687,29717,29731,29737,29741,29759,29771,29783,29803,29807,29815,29819,29821,29833,29837,29861,29873,29909,29911,29921,29923,29927,29947,29971,29981,29987,29999,30013,30023,30047,30053,30071,30091,30101,30107,30121,30151,30161,30175,30179,30187,30191,30203,30205,30217,30241,30251,30253,30263,30269,30283,30301,30343,30347,30359,30361,30383,30385,30391,30401,30407,30419,30449,30467,30475,30487,30493,30497,30511,30517,30527,30553,30577,30581,30583,30611,30625,30631,30653,30655,30659,30673,30677,30685,30727,30733,30737,30743,30749,30763,30779,30817,30821,30827,30839,30847,30869,30881,30895,30913,30925,30937,30947,30959,30967,30971,30985,31015,31019,31027,31045,31067,31093,31109,31117,31127,31133,31141,31181,31183,31187,31201,31213,31225,31247,31259,31273,31277,31313,31319,31327,31331,31345,31351,31367,31381,31397,31405,31441,31451,31465,31469,31499,31511,31517,31523,31525,31537,31553,31561,31573,31601,31619,31631,31643,31649,31679,31703,31709,31753,31757,31763,31765,31777,31781,31783,31799,31801,31807,31829,31843,31853,31883,31885,31891,31897,31907,31931,31943,31949,31961,31967,31973,31987,32003,32035,32053,32069,32077,32087,32093,32113,32117,32123,32167,32177,32197,32201,32219,32221,32237,32257,32261,32263,32273,32279,32281,32311,32317,32323,32327,32333,32339,32341,32353,32369,32377,32401,32407,32423,32429,32437,32459,32461,32467,32471,32473,32485,32489,32497,32501,32519,32521,32527,32561,32567,32579,32587,32617,32647,32665,32695,32699,32701,32707,32711,32723,32753,32755,32771,32773,32777,32785,32801,32813,32815,32833,32837,32867,32891,32903,32905,32909,32933,32947,32963,32965,32999,33011,33025,33041,33047,33053,33061,33067,33077,33091,33113,33115,33127,33149,33163,33181,33191,33193,33197,33209,33221,33227,33253,33281,33283,33301,33325,33329,33331,33347,33361,33383,33389,33415,33443,33445,33451,33461,33473,33491,33497,33511,33533,33535,33539,33563,33577,33587,33629,33637,33641,33643,33655,33673,33677,33715,33719,33743,33757,33761,33767,33781,33805,33809,33811,33821,33823,33833,33835,33847,33863,33865,33877,33881,33893};
	/*int v[TAM], cont=0,  f=1;
	vector<int> mv;
	mv.push_back(1);
	for(int j=2;j<=TAM;j++)
		v[j]=1;

	for(int j=2;j<=TAM;j++) {
		for(int k=j; f;k++) {
			if(v[k]){
				mv.push_back(k);
				v[k]=0;
				f=0;
				j=k;
			}
		}
		f=1;
		for(int i=j;i<=TAM;i++){
			if(v[i]) {
				cont++;
			}
			if(cont==j){
				cont=0;
				v[i]=0;
			}			
		}
		cont=0;
	}
for(int i=0;i<=mv.size();i++)
	cout << mv[i] <<",";
cout<<endl;*/
		
	int a;
	while(scanf("%d",&a),a)
		printf("%d\n", mv[a]);

	return 0;
}