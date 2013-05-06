#include "xcint.hpp"

static struct alias_data aliases_array[XC_MAX_ALIASES] =
{
  {"lda","Slater exchange and VWN5 correlation",{{"slaterx",1.0},{"vwn5c",1.0}} },
  {"blyp","Becke exchange and LYP correlation",{{"beckex",1.0},{"lypc",1.0}} },
  {"pbe","PBE exchange and correlation",{{"pbex",1.0},{"pbec",1.0}} },
  {"bp86","Becke-Perdew 1986",{{"beckex",1.0},{"p86c",1.0}} },
  {"kt2","Keal-Tozer 2",{{"slaterx",1.07173},{"ktx",-0.006},{"vwn5c",0.576727}} },
  {"kt3","Keal-Tozer 3",{{"slaterx",1.092},{"ktx",-0.004},{"optxcorr",-0.925452},{"lypc",0.864409}} },
  // Hybrid Functionals
  {"pbe0","Perdew-Burke-Ernzerhof",{{"pbex",0.75},{"pbec",1.0},{"exx",0.25}} }, 
  {"b3lyp","Becke-3-paramater-LYP (VWN5 form)", {{"slaterx",0.80},{"beckecorrx",0.72},{"lypc",0.81},{"vwn5c",0.19},{"exx",0.20}} }, 
  {"m06","M06", {{"m06c",0.80},{"m06x",1.0}} }, 
};

struct alias_data *xcint_aliases = aliases_array;