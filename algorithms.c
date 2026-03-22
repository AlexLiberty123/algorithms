#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>


// MATHEMATICS CONSTANTS
const double PI                             = 3.1415926535897932;
const double E                              = 2.7182818284590452;
const double GOLDEN_RATIO                   = 1.6180339887498948;
const double SQRT2                          = 1.4142135623730950;
const double SQRT3                          = 1.7320508075688772;
const double LN2                            = 0.6931471805599453;

const double K_CIRCLE                       = 0.6072529350088812;
const double K_HYPER                        = 1.2051363260334812;
const double ARCTG_TABLE[16] = {           0.7853981633974483,
                                           0.4636476090008061,
                                           0.2449786631268641,
                                           0.1243549945467614,
                                           0.0624188099959574,
                                           0.0312398334302683,
                                           0.0156237286204768,
                                           0.0078123410601011,
                                           0.0039062301319669,
                                           0.0019531225164788,
                                          0.0009765621895593,
                                          0.0004882812111948,
                                          0.0002441406201493,
                                          0.0001220703118936,
                                          0.0000610351561742,
                                          0.0000305175781155};
const double ARCTH_TABLE[16] = {           0.0000000000000000,
                                           0.5493061443340548,
                                           0.2554128118829953,
                                           0.1256572141404488,
                                           0.0625815714770023,
                                           0.0312601784917116,
                                           0.0156262717520101,
                                           0.0078126589515945,
                                           0.0039062698681285,
                                           0.0019531274843916,
                                          0.0009765628189674,
                                          0.0004882812822180,
                                          0.0002441406290888,
                                          0.0001220703129555,
                                          0.0000610351563402,
                                          0.0000305175781387};

// FUNDAMENTAL CONSTANTS 
const double SPEED_OF_LIGHT                 = 299792458.0;
const double GRAVITY_CONST                  = 6.67430e-11;
const double PLANCK_CONST                   = 6.62607015e-34;
const double ELEM_CHARGE                    = 1.602176634e-19;

// ELECTROMAGNETISM 
const double VACUUM_PERMITTIVITY            = 8.8541878128e-12;
const double VACUUM_PERMEABILITY            = 1.25663706212e-6;

// PARTICLE MASSES & RATIOS 
const double ELECTRON_MASS                  = 9.1093837015e-31;
const double PROTON_MASS                    = 1.67262192369e-27;
const double NEUTRON_MASS                   = 1.67492749804e-27;
const double ALPHA_PARTICLE_MASS            = 6.6446573357e-27;
const double ATOMIC_MASS_UNIT               = 1.66053906660e-27;
const double PHYS_PROTON_ELECTRON_RATIO     = 1836.15267343;

// ATOMIC & QUANTUM PHYSICS
const double BOHR_RADIUS                    = 5.29177210903e-11;
const double RYDBERG_CONST                  = 10973731.568160;
const double BOHR_MAGNETON                  = 9.2740100783e-24;
const double NUCLEAR_MAGNETON               = 5.0507837461e-27;
const double FINE_STRUCTURE_CONST           = 7.2973525693e-3;
const double INVERSE_FINE_STRUCTURE_CONST   = 137.035999084;
const double COMPTON_WAVELENGTH             = 2.42631023867e-12;
const double CLASSICAL_ELECTRON_RAD         = 2.8179403262e-15;
const double THOMSON_CROSS_SECTION          = 6.6524587321e-29;
const double ELECTRON_MAG_ANOMALY           = 0.00115965218128;

// THERMODYNAMICS, RADIATION & CHEMISTRY
const double AVOGADRO_CONST                 = 6.02214076e23;
const double BOLTZMANN_CONST                = 1.380649e-23;
const double GAS_CONST                      = 8.31446261815324;
const double FARADAY_CONST                  = 96485.33212331;
const double STEFAN_BOLTZMANN_CONST         = 5.670374419e-8;
const double WIEN_DISPLACEMENT              = 2.897771955e-3;
const double RADIATION_CONST_1              = 3.741771852e-16;
const double RADIATION_CONST_2              = 1.438776877e-2;

// MACRO-PHYSICS & CONVERSIONS
const double EARTH_GRAVITY                  = 9.80665;
const double ELECTRON_VOLT                  = 1.602176634e-19;

// PLANCK SCALES
const double PLANCK_LENGTH                  = 1.616255e-35;
const double PLANCK_TIME                    = 5.391247e-44;
const double PLANCK_MASS                    = 2.176434e-8;
const double PLANCK_TEMPERATURE             = 1.416784e32;

// ADVANCED ELECTROMAGNETISM & SOLID STATE
const double IMPEDANCE_OF_VACUUM            = 376.730313668;
const double COULOMB_CONST                  = 8.9875517923e9;
const double CONDUCTANCE_QUANTUM            = 7.748091729e-5;
const double MAGNETIC_FLUX_QUANTUM          = 2.067833848e-15;
const double JOSEPHSON_CONST                = 483597.8484e9;
const double VON_KLITZING_CONST             = 25812.80745;

// ADVANCED ATOMIC PHYSICS
const double HARTREE_ENERGY                 = 4.3597447222071e-18;
const double RYDBERG_ENERGY                 = 2.1798723611035e-18;
const double BOHR_VELOCITY                  = 2187691.263;

// STANDARD MODEL PARTICLES
const double TAU_MASS                       = 3.16754e-27;
const double W_BOSON_MASS                   = 1.43325e-25;
const double Z_BOSON_MASS                   = 1.62556e-25;
const double HIGGS_BOSON_MASS               = 2.22900e-25;

// ASTRONOMY & COSMOLOGY
const double ASTRONOMICAL_UNIT              = 149597870700.0;
const double LIGHT_YEAR                     = 9.4607304725808e15;
const double PARSEC                         = 3.08567758149137e16;
const double SOLAR_MASS                     = 1.98847e30;
const double EARTH_MASS                     = 5.9722e24;
const double SOLAR_RADIUS                   = 6.957e8;
const double EARTH_RADIUS_EQUATORIAL        = 6378137.0;
const double HUBBLE_CONST                   = 2.2685e-18;
const double CMB_TEMPERATURE                = 2.72548;

// FLUID DYNAMICS & STANDARD GASES
const double STANDARD_ATMOSPHERE            = 101325.0;
const double LOSCHMIDT_CONST                = 2.686780111e25;
const double MOLAR_VOLUME_IDEAL_GAS         = 0.02241396954;
const double SUTHERLAND_CONST_AIR           = 110.4;



float power_float(float base, int32_t indicator) {
    if (indicator == 0) { return 1; }

    float ans = 1;
    if (indicator > 0) {
        for (int32_t i = 0; i < indicator; i++) {
            ans *= base;
        }
        return ans;
    } else {
        for (int32_t i = 0; i < -indicator; i++) {
            ans *= base;
        }
        return 1.0/ans;
    }
}
double power_double(double base, int64_t indicator) {
    if (indicator == 0) { return 1; }

    double ans = 1;
    if (indicator > 0) {
        for (int64_t i = 0; i < indicator; i++) {
            ans *= base;
        }
        return ans;
    } else {
        for (int64_t i = 0; i < -indicator; i++) {
            ans *= base;
        }
        return 1.0/ans;
    }
}


char* reverse(char* input, char* output, int size) {
    for (int i = 0; i < size; i++) {
        output[i] = input[size-1-i];
    }

    return output;
}

int32_t* make_array_of_sequential_elements_int32(int32_t* output, int32_t start, int32_t final) {
    int32_t count = final - start + 1;
    for (int32_t i = 0; i < count; i++) {
        output[i] = i + start;
    }

    return output;
}
int64_t* make_array_of_sequential_elements_int64(int64_t* output, int64_t start, int64_t final) {
    int64_t count = final - start + 1;
    for (int64_t i = start; i < 1 + count; i++) {
        output[i] = i + start;
    }

    return output;
}


float square_root_float(float number) {
    float S = number / 2;
    for (int i = 0; i < 64; i++) {
        S = (S + number/S) / 2;
    }

    return S;
}
double square_root_double(double number) {
    double S = number / 2;
    for (int i = 0; i < 64; i++) {
        S = (S + number/S) / 2;
    }

    return S;
}


int32_t factorial_int32(int32_t number) {
    if (number <= 1) {
        return 1;
    }

    return number * factorial_int32(number - 1);
}
int64_t factorial_int64(int64_t number) {
    if (number <= 1) {
        return 1;
    }

    return number * factorial_int64(number - 1);
}


int32_t fibonacci_numbers_int32(int32_t number) {
    return (power_float(GOLDEN_RATIO, number) - power_double(-GOLDEN_RATIO, -number)) / (2*GOLDEN_RATIO-1);
}
int64_t fibonacci_numbers_int64(int64_t number) {
    return (power_double(GOLDEN_RATIO, number) - power_double(-GOLDEN_RATIO, -number)) / (2*GOLDEN_RATIO-1);
}


float binomial_coefficient_float(float n, int32_t k) {
    if (k == 0) { return 1; }
    else if (k < 0) { return 0; }
    else {
        float C = 1;
        for (int i = 0; i < k; i++) {
            C = C*(n-i);
        }
        return C/factorial_int32(k);
    }
}
double binomial_coefficient_double(double n, int64_t k) {
    if (k == 0) { return 1; }
    else if (k < 0) { return 0; }
    else {
        double C = 1;
        for (int i = 0; i < k; i++) {
            C = C*(n-i);
        }
        return C/factorial_int64(k);
    }
}


int32_t gcd_int32(int32_t number_1, int32_t number_2) {
    while (number_2 != 0) {
        int32_t t = number_2;
        number_2 = number_1 % number_2;
        number_1 = t;
    }

    return number_1;
}
int64_t gcd_int64(int64_t number_1, int64_t number_2) {
        while (number_2 != 0) {
        int64_t t = number_2;
        number_2 = number_1 % number_2;
        number_1 = t;
    }

    return number_1;
}


int32_t lcm_int32(int32_t number_1, int32_t number_2) {
    return (number_1*number_2)/gcd_int32(number_1, number_2);
}
int64_t lcm_int64(int64_t number_1, int64_t number_2) {
    return (number_1*number_2)/gcd_int64(number_1, number_2);
}


bool linear_search_int32(int32_t* input, int32_t searched, int32_t size, int32_t* ind) {
    for (int32_t i = 0; i < size; i++) {
        if (input[i] == searched) { *ind = i; return true; }
    }

    *ind = -1;
    return false;
}
bool linear_search_int64(int64_t* input, int64_t searched, int64_t size, int64_t* ind) {
    for (int64_t i = 0; i < size; i++) {
        if (input[i] == searched) { *ind = i; return true; }
    }

    *ind = -1;
    return false;
}


bool binary_search_int32(int32_t *input, int32_t searched, int32_t size, int32_t *ind) {
    int32_t left = 0; int32_t right = size - 1; int32_t mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (searched > input[mid]) { left = mid + 1; }
        else if (searched < input[mid]) { right = mid - 1;}
        else { *ind = mid; return true; }
    }

    *ind = -1;
    return false;
}
bool binary_search_int64(int64_t *input, int64_t searched, int64_t size, int64_t *ind) {
    int64_t left = 0; int64_t right = size - 1; int64_t mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (searched > input[mid]) { left = mid + 1; }
        else if (searched < input[mid]) { right = mid - 1;}
        else { *ind = mid; return true; }
    }

    *ind = -1;
    return false;
}


void bubble_sort_int32(int32_t* input, int32_t size) {
   bool sorted = true;
   int32_t old;
   while(sorted) {
       sorted = false;
       for (int i = 0; i < size - 1; i++) {
           if (input[i] > input[i + 1]) {
               old = input[i];
               input[i] = input[i + 1];
               input[i + 1] = old;
               sorted = true;
           }
       }
       if (!sorted) { return; }
   }
}
void bubble_sort_int64(int64_t* input, int64_t size) {
   bool sorted = true;
   int64_t old;
   while(sorted) {
       sorted = false;
       for (int i = 0; i < size - 1; i++) {
           if (input[i] > input[i + 1]) {
               old = input[i];
               input[i] = input[i + 1];
               input[i + 1] = old;
               sorted = true;
           }
       }
       if (!sorted) { return; }
   }
}


void selection_sort_int32(int32_t* input, int32_t size) {
    int32_t temp; int32_t min_index;
    for (int j = 0; j < size; j++) {
        min_index = j;
        for (int i = j; i < size; i++) {
            if (input[i] < input[min_index]) { min_index = i; }
        }
        temp = input[j];
        input[j] = input[min_index];
        input[min_index] = temp;
    }

    return;
}
void selection_sort_int64(int64_t* input, int64_t size) {
    int64_t temp; int64_t min_index;
    for (int j = 0; j < size; j++) {
        min_index = j;
        for (int i = j; i < size; i++) {
            if (input[i] < input[min_index]) { min_index = i; }
        }
        temp = input[j];
        input[j] = input[min_index];
        input[min_index] = temp;
    }

    return;
}


void insertion_sort_int32(int32_t *input, int32_t size) {
    for (int i = 1; i < size; i++) {
        int32_t current_card = input[i];
        int j = i;
        while (j > 0 && input[j - 1] > current_card) {
            input[j] = input[j - 1];
            j--;
        }
        input[j] = current_card;
    }
}
void insertion_sort_int64(int64_t *input, int64_t size) {
    for (int i = 1; i < size; i++) {
        int32_t current_card = input[i];
        int j = i;
        while (j > 0 && input[j - 1] > current_card) {
            input[j] = input[j - 1];
            j--;
        }
        input[j] = current_card;
    }
}


int32_t finding_prime_numbers_int32(int32_t* output, int32_t start, int32_t final) {
    int32_t index = 0;
    for (int32_t number = start; number <= final; number++) {
        if (number <= 1) { continue; }

        int32_t count = 0;
        for (int32_t j = 2; j <= number / 2; j++) { 
            if (number % j == 0) { count++; break; }
        }
        if (count == 0) {
            output[index] = number;
            index++;
        }
    }

    return index; 
}

int64_t finding_prime_numbers_int64(int64_t* output, int64_t start, int64_t final) {
    int64_t index = 0;
    for (int64_t number = start; number <= final; number++) {
        if (number <= 1) { continue; }

        int64_t count = 0;
        for (int64_t j = 2; j <= number / 2; j++) { 
            if (number % j == 0) { count++; break; }
        }
        if (count == 0) {
            output[index] = number;
            index++;
        }
    }

    return index; 
}


bool primal_test_int32(int32_t number) {
    for (int32_t i = 2; i <= number/2; i++) {
        if (number % i == 0) { return false;}
    }

    return true;
}
bool primal_test_int64(int64_t number) {
    for (int64_t i = 2; i <= number/2; i++) {
        if (number % i == 0) { return false;}
    }

    return true;
}


//typedef union {
//    double d;
//    uint64_t i;
//} DoubleBits;


double Dirichlet_eta_function(double s) {
    double eta_ans = 0;
    double pre_eta = 0;
    int minus = 1;
    for (int64_t n = 0; n < 22; n++) {
        pre_eta = 0;
        minus = 1;
        for (int64_t k = 0; k <= n; k++) {
            pre_eta += binomial_coefficient_double(n, k) * (minus / power_double(k + 1, s));
            minus *= -1;
        }
        pre_eta *= 1.0/(power_double(2, n + 1));
        eta_ans += pre_eta;
    }

    return eta_ans;
}


double Riemann_zeta_function(int64_t s) {
    return Dirichlet_eta_function(s) / (1 - power_double(2, 1 - s));
}


double Bernoulli_number(int64_t number) {
    return -number*Riemann_zeta_function(1-number);
}


float cos_float(float angle);
double cos_double(double angle);

float sin_float(float angle) {
    int8_t sign = 1;
    if (angle >= 0) {
        sign = 1;
    } else {
        sign = -1;
        angle = -angle;
    }
    while (angle > 2 * PI) {
      angle -= 2 * PI;
    }
    if (angle > PI) {
        angle -= PI;
        sign *= -1;
    }
    if (angle > PI / 2) {
        angle = PI - angle;
    }
    if (angle > PI / 4) {
        return sign * cos_float(PI/2 - angle);
    }

    float ans = 0;
    for (int n = 0; n < 10; n++) {
        if (n % 2 == 0) {
            ans += power_float(angle, 2*n + 1) / (factorial_int64(2*n + 1));
        } else {
            ans -= power_float(angle, 2*n + 1) / (factorial_int64(2*n + 1));
        }
    }

    return sign*ans;
}
double sin_double(double angle) {
    int8_t sign = 1;
    if (angle >= 0) {
        sign = 1;
    } else {
        sign = -1;
        angle = -angle;
    }
    while (angle > 2 * PI) {
      angle -= 2 * PI;
    }
    if (angle > PI) {
        angle -= PI;
        sign *= -1;
    }
    if (angle > PI / 2) {
        angle = PI - angle;
    }
    if (angle > PI / 4) {
        return sign * cos_double(PI/2 - angle);
    }

    double ans = 0;
    for (int n = 0; n < 20; n++) {
        if (n % 2 == 0) {
            ans += power_double(angle, 2*n + 1) / (factorial_int64(2*n + 1));
        } else {
            ans -= power_double(angle, 2*n + 1) / (factorial_int64(2*n + 1));
        }
    }

    return sign*ans;
}


float cos_float(float angle) {
    int8_t sign = 1;
    if (angle < 0) {
        angle = -angle;
    }
    while (angle > 2 * PI) {
        angle -= 2 * PI;
    }
    if (angle > PI) {
        angle -= PI;
        sign *= -1;
    }
    if (angle > PI / 2) {
        angle = PI - angle;
        sign *= -1;
    }
    if (angle > PI / 4) {
        return sign * sin_float(PI/2 - angle);
    }

    float ans = 0;
    for (int n = 0; n < 10; n++) {
        if (n % 2 == 0) {
            ans += power_float(angle, 2*n) / (factorial_int64(2*n));
        } else {
            ans -= power_float(angle, 2*n) / (factorial_int64(2*n));
        }
    }

    return sign*ans;
}
double cos_double(double angle) {
    int8_t sign = 1;
    if (angle < 0) {
        angle = -angle;
    }
    while (angle > 2 * PI) {
        angle -= 2 * PI;
    }
    if (angle > PI) {
        angle -= PI;
        sign *= -1;
    }
    if (angle > PI / 2) {
        angle = PI - angle;
        sign *= -1;
    }
    if (angle > PI / 4) {
        return sign * sin_double(PI/2 - angle);
    }

    double ans = 0;
    for (int n = 0; n < 20; n++) {
        if (n % 2 == 0) {
            ans += power_double(angle, 2*n) / (factorial_int64(2*n));
        } else {
            ans -= power_double(angle, 2*n) / (factorial_int64(2*n));
        }
    }

    return sign*ans;
}


float tg_float(float angle) { return sin_float(angle) / cos_float(angle); }
double tg_double(double angle) { return sin_double(angle) / cos_double(angle); }


float ctg_float(float angle) { return cos_float(angle) / sin_float(angle); }
double ctg_double(double angle) { return cos_double(angle) / sin_double(angle); }


float sec_float(float angle) { return 1 / sin_float(angle); }
double sec_double(double angle) { return 1 / sin_double(angle); }


float cosec_float(float angle) { return 1 / cos_float(angle); }
double cosec_double(double angle) { return 1 / cos_float(angle); }


float sh_float(float angle) {
  return (power_float(E, angle) - power_float(E, -angle)) / 2;
}
double sh_double(double angle) {
  return (power_double(E, angle) - power_double(E, -angle)) / 2;
}


float ch_float(float angle) {
  return (power_float(E, angle) + power_float(E, -angle)) / 2;
}
double ch_double(double angle) {
  return (power_double(E, angle) + power_double(E, -angle)) / 2;
}


float th_float(float angle) {
  return (power_float(E, 2*angle) - 1) / (power_float(E, 2*angle) + 1);
}
double th_double(double angle) {
  return (power_double(E, 2*angle) - 1) / (power_double(E, 2*angle) + 1);
}


float cth_float(float angle) {
  return (power_float(E, 2*angle) + 1) / (power_float(E, 2*angle) - 1);
}
double cth_double(double angle) {
  return (power_double(E, 2*angle) + 1) / (power_double(E, 2*angle) - 1);
}


float sech_float(float angle) {
  return 2 / (power_float(E, angle) + power_float(E, -angle));
}
double sech_double(double angle) {
  return 2 / (power_double(E, angle) + power_double(E, -angle));
}


float cosech_float(float angle) {
  return 2 / (power_float(E, angle) - power_float(E, -angle));
}
double cosech_double(double angle) {
  return 2 / (power_double(E, angle) - power_double(E, -angle));
}



float CORDIC_sin_float(float angle) {
    while (angle > 2 * PI) { angle -= 2.0 * PI; }
    if (angle < 0) { angle += 2.0 * PI; }

    int sign_Y = 1;

    if (angle > PI / 2.0 && angle <= PI) { angle = PI - angle; }
    else if (angle > PI && angle <= 3.0 * PI / 2.0) { angle = angle - PI; sign_Y = -1; }
    else if (angle > 3.0 * PI / 2.0) { angle = 2.0 * PI - angle; sign_Y = -1; }

    float X = 1.0;
    float X_old;
    float Y = 0.0;
    float Z = angle;
    float pow2 = 1.0;
    int8_t dir;

    for (int i = 0; i < 20; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old - (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        Z = Z - (dir * ARCTG_TABLE[i]);
        pow2 /= 2.0;
    }

    return sign_Y*Y*K_CIRCLE;
}
double CORDIC_sin_double(double angle) {
    while (angle > 2 * PI) { angle -= 2.0 * PI; }
    if (angle < 0) { angle += 2.0 * PI; }

    int sign_Y = 1;

    if (angle > PI / 2.0 && angle <= PI) { angle = PI - angle; }
    else if (angle > PI && angle <= 3.0 * PI / 2.0) { angle = angle - PI; sign_Y = -1; }
    else if (angle > 3.0 * PI / 2.0) { angle = 2.0 * PI - angle; sign_Y = -1; }

    double X = 1.0;
    double X_old;
    double Y = 0.0;
    double Z = angle;
    double pow2 = 1.0;
    double current_angle;
    int8_t dir;

    for (int i = 0; i < 100; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old - (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTG_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        pow2 /= 2.0;
    }

    return sign_Y*Y*K_CIRCLE;
}


float CORDIC_cos_float(float angle) {
    while (angle > 2 * PI) { angle -= 2.0 * PI; }
    if (angle < 0) { angle += 2.0 * PI; }

    int sign_X = 1;

    if (angle > PI / 2.0 && angle <= PI) { angle = PI - angle; sign_X = -1; }
    else if (angle > PI && angle <= 3.0 * PI / 2.0) { angle = angle - PI; sign_X = -1; }
    else if (angle > 3.0 * PI / 2.0) { angle = 2.0 * PI - angle; }

    float X = 1.0;
    float X_old;
    float Y = 0.0;
    float Z = angle;
    float pow2 = 1.0;
    int8_t dir;

    for (int i = 0; i < 50; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old - (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        Z = Z - (dir * ARCTG_TABLE[i]);
        pow2 /= 2.0;
    }

    return sign_X*X*K_CIRCLE;
}
double CORDIC_cos_double(double angle) {
    while (angle > 2 * PI) { angle -= 2.0 * PI; }
    if (angle < 0) { angle += 2.0 * PI; }

    int sign_X = 1;

    if (angle > PI / 2.0 && angle <= PI) { angle = PI - angle; sign_X = -1; }
    else if (angle > PI && angle <= 3.0 * PI / 2.0) { angle = angle - PI; sign_X = -1; }
    else if (angle > 3.0 * PI / 2.0) { angle = 2.0 * PI - angle; }

    double X = 1.0;
    double X_old;
    double Y = 0.0;
    double Z = angle;
    double pow2 = 1.0;
    double current_angle;
    int8_t dir;

    for (int i = 0; i < 100; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old - (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTG_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        pow2 /= 2.0;
    }

    return sign_X*X*K_CIRCLE;
}


float CORDIC_tg_float(float angle) { return CORDIC_sin_float(angle) / CORDIC_cos_float(angle); }
double CORDIC_tg_double(double angle) { return CORDIC_sin_double(angle) / CORDIC_cos_double(angle); }


float CORDIC_ctg_float(float angle) { return CORDIC_cos_float(angle) / CORDIC_sin_float(angle); }
double CORDIC_ctg_double(double angle) { return CORDIC_cos_double(angle) / CORDIC_sin_double(angle); }


float CORDIC_sec_float(float angle) { return 1 / CORDIC_sin_float(angle); }
double CORDIC_sec_double(double angle) { return 1 / CORDIC_sin_double(angle); }


float CORDIC_cosec_float(float angle) { return 1 / CORDIC_cos_float(angle); }
double CORDIC_cosec_double(double angle) { return 1 / CORDIC_cos_double(angle); }


float CORDIC_sh_float(float angle) {
    int8_t sign = 1;
    if (angle < 0) { angle = -angle; sign = -1; }
    int64_t k = 0;
    if (angle > 20) { return power_float(E, angle) / 2.0; }
    while (angle > 1.118) { angle /= 2; k++; }

    float X_old;
    float Y_old;
    float X = 1.0;
    float Y = 0.0;
    float Z = angle;
    float pow2 = 0.5;
    float current_angle;
    int8_t dir;

    for (int i = 1; i < 51; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old + (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        if (i == 4 || i == 13 || i == 40) {
            if (Z > 0) { dir = 1; }
            else { dir = -1; }
            X_old = X;
            X = X_old + (dir * Y * pow2);
            Y = Y + (dir * X_old * pow2);
            if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
            else { current_angle = pow2; }
            Z = Z - (dir * current_angle);
        }
        pow2 /= 2.0;
    }
    X *= K_HYPER; Y *= K_HYPER;
    for (int i = 0; i < k; i++) { Y_old = Y; Y = 2 * X * Y; X = X * X + Y_old * Y_old; }
    return sign*Y;
}
double CORDIC_sh_double(double angle) {
    int8_t sign = 1;
    if (angle < 0) { angle = -angle; sign = -1; }
    int64_t k = 0;
    if (angle > 20) { return power_double(E, angle) / 2.0; }
    while (angle > 1.118) { angle /= 2; k++; }

    double X_old;
    double Y_old;
    double X = 1.0;
    double Y = 0.0;
    double Z = angle;
    double pow2 = 0.5;
    double current_angle;
    int8_t dir;

    for (int i = 1; i < 101; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old + (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        if (i == 4 || i == 13 || i == 40) {
            if (Z > 0) { dir = 1; }
            else { dir = -1; }
            X_old = X;
            X = X_old + (dir * Y * pow2);
            Y = Y + (dir * X_old * pow2);
            if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
            else { current_angle = pow2; }
            Z = Z - (dir * current_angle);
        }
        pow2 /= 2.0;
    }
    X *= K_HYPER; Y *= K_HYPER;
    for (int i = 0; i < k; i++) { Y_old = Y; Y = 2 * X * Y; X = X * X + Y_old * Y_old; }
    return sign*Y;
}


float CORDIC_ch_float(float angle) {
    int64_t k = 0;
    if (angle < 0) { angle = -angle; }
    if (angle > 20) { return power_float(E, angle) / 2.0; }
    while (angle > 1.118) { angle /= 2; k++; }

    float X_old;
    float Y_old;
    float X = 1.0;
    float Y = 0.0;
    float Z = angle;
    float pow2 = 0.5;
    float current_angle;
    int8_t dir;

    for (int i = 1; i < 51; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old + (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        if (i == 4 || i == 13 || i == 40) {
            if (Z > 0) { dir = 1; }
            else { dir = -1; }
            X_old = X;
            X = X_old + (dir * Y * pow2);
            Y = Y + (dir * X_old * pow2);
            if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
            else { current_angle = pow2; }
            Z = Z - (dir * current_angle);
        }
        pow2 /= 2.0;
    }
    X *= K_HYPER; Y *= K_HYPER;
    for (int i = 0; i < k; i++) { Y_old = Y; Y = 2 * X * Y; X = X * X + Y_old * Y_old; }
    return X;
}
double CORDIC_ch_double(double angle) {
    int64_t k = 0;
    if (angle < 0) { angle = -angle; }
    if (angle > 20) { return power_double(E, angle) / 2.0; }
    while (angle > 1.118) { angle /= 2; k++; }

    double X_old;
    double Y_old;
    double X = 1.0;
    double Y = 0.0;
    double Z = angle;
    double pow2 = 0.5;
    double current_angle;
    int8_t dir;

    for (int i = 1; i < 101; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old + (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        if (i == 4 || i == 13 || i == 40) {
            if (Z > 0) { dir = 1; }
            else { dir = -1; }
            X_old = X;
            X = X_old + (dir * Y * pow2);
            Y = Y + (dir * X_old * pow2);
            if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
            else { current_angle = pow2; }
            Z = Z - (dir * current_angle);
        }
        pow2 /= 2.0;
    }
    X *= K_HYPER; Y *= K_HYPER;
    for (int i = 0; i < k; i++) { Y_old = Y; Y = 2 * X * Y; X = X * X + Y_old * Y_old; }
    return X;
}


float CORDIC_th_float(float angle) { return CORDIC_sh_float(angle) / CORDIC_ch_float(angle); }
double CORDIC_th_double(double angle) { return CORDIC_sh_double(angle) / CORDIC_ch_double(angle); }


float CORDIC_cth_float(float angle) { return CORDIC_ch_float(angle) / CORDIC_sh_float(angle); }
double CORDIC_cth_double(double angle) { return CORDIC_ch_double(angle) / CORDIC_sh_double(angle); }


float CORDIC_sech_float(float angle) { return 1 / CORDIC_sh_float(angle); }
double CORDIC_sech_double(double angle) { return 1 / CORDIC_sh_double(angle); }


float CORDIC_cosech_float(float angle) { return 1 / CORDIC_ch_float(angle); }
double CORDIC_cosech_double(double angle) { return 1 / CORDIC_ch_double(angle); }


float natural_logarithm_float(float a) {
    DoubleBits bits;
    bits.d = (double) a;
    int exponent = ((bits.i >> 52) & 0x7FF) - 1023;
    uint64_t mantissa_bits = (bits.i & 0x000FFFFFFFFFFFFF) | (1023ULL << 52);

    DoubleBits m_conv;
    m_conv.i = mantissa_bits;
    float mantissa = m_conv.d;

    float y = (mantissa - 1) / (mantissa + 1);
    float ans = 0;
    for (int i = 0; i < 6; i++) { ans += power_float(y, 2 * i + 1) / (2 * i + 1); }

    return 2 * ans + exponent * LN2;
}
double natural_logarithm_double(double a) {
    DoubleBits bits;
    bits.d = a;
    int exponent = ((bits.i >> 52) & 0x7FF) - 1023;
    uint64_t mantissa_bits = (bits.i & 0x000FFFFFFFFFFFFF) | (1023ULL << 52);

    DoubleBits m_conv;
    m_conv.i = mantissa_bits;
    double mantissa = m_conv.d;

    double y = (mantissa - 1) / (mantissa + 1);
    double ans = 0;
    for (int i = 0; i < 16; i++) { ans += power_double(y, 2 * i + 1) / (2 * i + 1); }

    return 2 * ans + exponent * LN2;
}


float arbitraty_logarithm_float(float a, float b) { return natural_logarithm_float(a) / natural_logarithm_float(b); }
double arbitraty_logarithm_double(double a, double b) { return natural_logarithm_double(a) / natural_logarithm_double(b); }
