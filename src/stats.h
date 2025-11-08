#ifndef STATS_H
#define STATS_H

// Overall Stats
extern double HP;
extern double ATK;
extern double DEF;
extern double CritRate;
extern double CritDamage;
extern double EM;
extern double HB;
extern double IHB;
extern double ER;
extern double ShieldStrength;
extern double AnemoDmg;
extern double CryoDmg;
extern double DendroDmg;
extern double ElectroDmg;
extern double GeoDmg;
extern double HydroDmg;
extern double PyroDmg;
extern double PhysicalDmg;

// SubStat Variation
extern double HP_P;
extern double ATK_P;
extern double DEF_P;
extern double FlatHP;
extern double FlatATK;
extern double FlatDEF;

// Public Functions
void print_stats();
void update_stats();

#endif
