#include <stdio.h>

char direccion[] = "C:\\Users\\DELL\\Desktop\\Cornelio\\Github_repos\\C-Programming-Course\\12_bills_checker_project\\bills.txt";
FILE *archivo, *fd;

float sueldo = 0;
int gasto = 0;
bool state = true;
char caracter, fecha[50];

int acumulador_metro = 0;
int acumulador_cable = 0;
int acumulador_eco = 0;
int acumulador_rtp = 0;
int acumulador_microbus = 0;
int acumulador_ruta = 0;
int acumulador_tren = 0;
int acumulador_gas = 0;

float gasto_gas = 0;

int *p_acumulador_metro;
int *p_acumulador_cable;
int *p_acumulador_eco;
int *p_acumulador_rtp;
int *p_acumulador_microbus;
int *p_acumulador_ruta;
int *p_acumulador_tren;
int *p_acumulador_gas;
float *p_sueldo;
float *p_gasto_gas;

int gasto_metro = 5;
int gasto_cablebus = 5;
int gasto_ecobici = 15;
int gasto_microbus = 17;
int gasto_rtp = 10;
int gasto_ruta = 8;
int gasto_tren = 12;

int *p_gasto_metro;
int *p_gasto_cablebus;
int *p_gasto_ecobici;
int *p_gasto_microbus;
int *p_gasto_rtp;
int *p_gasto_ruta;
int *p_gasto_tren;