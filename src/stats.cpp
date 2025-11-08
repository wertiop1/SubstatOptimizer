#include <iostream>

#include "stats.h"

/*
Base Stats
*/
int LVL = 90;
double baseHP = 500;
double baseATK = 12;
double baseDEF = 13;

// SubStat Variation
double HP_P = 0;
double ATK_P = 0;
double DEF_P = 0;
double FlatHP = 0;
double FlatATK = 0;
double FlatDEF = 0;

/*Overall Stats*/
double HP = baseHP * (1 + HP_P / 100) + FlatHP;
double ATK = baseATK * (1 + ATK_P / 100) + FlatATK;
double DEF = baseDEF * (1 + DEF_P / 100) + FlatDEF;
double CritRate = 5.00;
double CritDamage = 50.00;
double EM = 0;
double HB = 0;
double IHB = 0;
double ER = 0;
double ShieldStrength = 0;
double AnemoDmg = 0;
double CryoDmg = 0;
double DendroDmg = 0;
double ElectroDmg = 0;
double GeoDmg = 0;
double HydroDmg = 0;
double PyroDmg = 0;
double PhysicalDmg = 0;

void update_stats() {
  HP = baseHP * (1 + HP_P / 100) + FlatHP;
  ATK = baseATK * (1 + ATK_P / 100) + FlatATK;
  DEF = baseDEF * (1 + DEF_P / 100) + FlatDEF;
}

void print_stats() {
  update_stats();
  std::cout << "Level: " << LVL << '\n';
  std::cout << "HP: " << HP << '\n';
  std::cout << "ATK: " << ATK << '\n';
  std::cout << "DEF: " << DEF << '\n';
  std::cout << "Elemental Mastery: " << EM << '\n';
  std::cout << "Energy Recharge: " << ER << '\n';
  std::cout << "Crit Rate: " << CritRate << '\n';
  std::cout << "Crit Damage: " << CritDamage << '\n';

  std::cout << std::endl;
}
