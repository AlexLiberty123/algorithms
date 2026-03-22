#ifndef ALGORITHMS_H
#define ALGORITHMS_H


#include <stdint.h>
#include <stdbool.h>


// MATHEMATICS CONSTANTS
extern const double PI;
extern const double E;
extern const double GOLDEN_RATIO;
extern const double SQRT2;
extern const double SQRT3;
extern const double EULER_MASCHERONI;
extern const double LN2;

extern const double K_CIRCLE;
extern const double K_HYPER;
extern const double ARCTG_TABLE[16];
extern const double ARCTH_TABLE[16];

// FUNDAMENTAL CONSTANTS 
extern const double SPEED_OF_LIGHT;
extern const double GRAVITY_CONST;
extern const double PLANCK_CONST;
extern const double ELEM_CHARGE;


// ELECTROMAGNETISM
extern const double VACUUM_PERMITTIVITY;
extern const double VACUUM_PERMEABILITY;

// PARTICLE MASSES & RATIOS 
extern const double ELECTRON_MASS;
extern const double PROTON_MASS;
extern const double NEUTRON_MASS;
extern const double ALPHA_PARTICLE_MASS;
extern const double ATOMIC_MASS_UNIT;
extern const double PHYS_PROTON_ELECTRON_RATIO;

// ATOMIC & QUANTUM PHYSICS
extern const double BOHR_RADIUS;
extern const double RYDBERG_CONST;
extern const double BOHR_MAGNETON;
extern const double NUCLEAR_MAGNETON;
extern const double FINE_STRUCTURE_CONST;
extern const double INVERSE_FINE_STRUCTURE_CONST;
extern const double COMPTON_WAVELENGTH;
extern const double CLASSICAL_ELECTRON_RAD;
extern const double THOMSON_CROSS_SECTION;
extern const double ELECTRON_MAG_ANOMALY;

// THERMODYNAMICS, RADIATION & CHEMISTRY
extern const double AVOGADRO_CONST;
extern const double BOLTZMANN_CONST;
extern const double GAS_CONST;
extern const double FARADAY_CONST;
extern const double STEFAN_BOLTZMANN_CONST;
extern const double WIEN_DISPLACEMENT;
extern const double RADIATION_CONST_1;
extern const double RADIATION_CONST_2;

// MACRO-PHYSICS & CONVERSIONS
extern const double EARTH_GRAVITY;
extern const double ELECTRON_VOLT;

// PLANCK SCALES
extern const double PLANCK_LENGTH;
extern const double PLANCK_TIME;
extern const double PLANCK_MASS;
extern const double PLANCK_TEMPERATURE;

// ADVANCED ELECTROMAGNETISM & SOLID STATE
extern const double IMPEDANCE_OF_VACUUM;
extern const double COULOMB_CONST;
extern const double CONDUCTANCE_QUANTUM;
extern const double MAGNETIC_FLUX_QUANTUM;
extern const double JOSEPHSON_CONST;
extern const double VON_KLITZING_CONST;

// ADVANCED ATOMIC PHYSICS
extern const double HARTREE_ENERGY;
extern const double RYDBERG_ENERGY;
extern const double BOHR_VELOCITY;

// STANDARD MODEL PARTICLES
extern const double TAU_MASS;
extern const double W_BOSON_MASS;
extern const double Z_BOSON_MASS;
extern const double HIGGS_BOSON_MASS;

// ASTRONOMY & COSMOLOGY
extern const double ASTRONOMICAL_UNIT;
extern const double LIGHT_YEAR;
extern const double PARSEC;
extern const double SOLAR_MASS;
extern const double EARTH_MASS;
extern const double SOLAR_RADIUS;
extern const double EARTH_RADIUS_EQUATORIAL;
extern const double HUBBLE_CONST;
extern const double CMB_TEMPERATURE;

// FLUID DYNAMICS & STANDARD GASES
extern const double STANDARD_ATMOSPHERE;
extern const double LOSCHMIDT_CONST;
extern const double MOLAR_VOLUME_IDEAL_GAS;
extern const double SUTHERLAND_CONST_AIR;


float square_root_float(float number);
double square_root_double(double number);


float power_float(float base, int32_t indicator);
double power_double(double base, int64_t indicator);


char* reverse(char* input, char* output, int size);
int32_t* make_array_of_sequential_elements_int32(int32_t* output, int32_t start, int32_t final);
int64_t* make_array_of_sequential_elements_int64(int64_t* output, int64_t start, int64_t final);


int32_t factorial_int32(int32_t number);
int64_t factorial_int64(int64_t number);


int32_t fibonacci_numbers_int32(int32_t number);
int64_t fibonacci_numbers_int64(int64_t number);


float binomial_coefficient_float(float n, int32_t k);
double binomial_coefficient_double(double n, int64_t k);


int32_t gcd_int32(int32_t number_1, int32_t number_2);
int64_t gcd_int64(int64_t number_1, int64_t number_2);


int32_t lcm_int32(int32_t number_1, int32_t number_2);
int64_t lcm_int64(int64_t number_1, int64_t number_2);


bool linear_search_int32(int32_t* input, int32_t searched, int32_t size, int32_t* ind);
bool linear_search_int64(int64_t* input, int64_t searched, int64_t size, int64_t* ind);


bool binary_search_int32(int32_t* input, int32_t searched, int32_t size, int32_t* ind);
bool binary_search_int64(int64_t* input, int64_t searched, int64_t size, int64_t* ind);


bool jump_search_int32(int32_t* input, int32_t searched, int32_t size, int32_t* ind);
bool jump_search_int64(int64_t* input, int64_t searched, int64_t size, int64_t* ind);


bool interpolation_search_int32(int32_t* input, int32_t searched, int32_t size, int32_t* ind);
bool interpolation_search_int64(int64_t* input, int64_t searched, int64_t size, int64_t* ind);


void bubble_sort_int32(int32_t* input, int32_t size);
void bubble_sort_int64(int64_t* input, int64_t size);


void selection_sort_int32(int32_t* input, int32_t size);
void selection_sort_int64(int64_t* input, int64_t size);


void insertion_sort_int32(int32_t* input, int32_t size);
void insertion_sort_int64(int64_t* input, int64_t size);


int32_t finding_prime_numbers_int32(int32_t* output, int32_t start, int32_t final);
int64_t finding_prime_numbers_int64(int64_t* output, int64_t start, int64_t final);


bool primal_test_int32(int32_t number);
bool primal_test_int64(int64_t number);

typedef union {
    double d;
    uint64_t i;
} DoubleBits;

double Dirichlet_eta_function(double s);


double Riemann_zeta_function(int64_t s);


double Bernoulli_number(int64_t number);


float sin_float(float angle);
double sin_double(double angle);

float cos_float(float angle);
double cos_double(double angle);

float tg_float(float angle);
double tg_double(double angle);

float ctg_float(float angle);
double ctg_double(double angle);

float sec_float(float angle);
double sec_double(double angle);

float cosec_float(float angle);
double cosec_double(double angle);


float sh_float(float angle);
double sh_double(double angle);

float ch_float(float angle);
double ch_double(double angle);

float th_float(float angle);
double th_double(double angle);

float cth_float(float angle);
double cth_double(double angle);

float sech_float(float angle);
double sech_double(double angle);

float cosech_float(float angle);
double cosech_double(double angle);



float  CORDIC_sin_float(float angle);
double CORDIC_sin_double(double angle);

float  CORDIC_cos_float(float angle);
double CORDIC_cos_double(double angle);

float  CORDIC_tg_float(float angle);
double CORDIC_tg_double(double angle);

float  CORDIC_ctg_float(float angle);
double CORDIC_ctg_double(double angle);

float  CORDIC_sec_float(float angle);
double CORDIC_sec_double(double angle);

float  CORDIC_cosec_float(float angle);
double CORDIC_cosec_double(double angle);


float  CORDIC_sh_float(float angle);
double CORDIC_sh_double(double angle);

float  CORDIC_ch_float(float angle);
double CORDIC_ch_double(double angle);

float  CORDIC_th_float(float angle);
double CORDIC_th_double(double angle);

float  CORDIC_cth_float(float angle);
double CORDIC_cth_double(double angle);

float  CORDIC_sech_float(float angle);
double CORDIC_sech_double(double angle);

float  CORDIC_cosech_float(float angle);
double CORDIC_cosech_double(double angle);


float natural_logarithm_float(float a);
double natural_logarithm_double(double a);


float arbitraty_logarithm_float(float a, float b);
double arbitraty_logarithm_double(double a, double b);

#endif
