#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std; 


float *read_file(string filename, int *n_points);
void model(float *y, float*x, int n_points, float *c, int poly_degree);
float loglikelihood(float *x_obs, float *y_obs, int n_points, float *c, int poly_degree);
float logprior(float *c, int poly_degree);
void MCMC_polynomial(float *x_obs, float *y_obs, int n_points, int n_steps, int poly_degree);

int main () {
  float *x = NULL;
  float *y = NULL;
  int n_x = 0;
  int n_y = 0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  
  MCMC_polynomial(x, y, n_x, 1000000, 3);
  
  return 0;
}

float *read_file(string filename, int *n_points){
    
//   int n_lines = 0;
//   infile.open(filename); 
//   getline(infile, line);
//   while(infile){
//     n_lines++;
//     getline(infile, line);
//   }
    
//   infile.close();
//   *n_points = n_lines;
    
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  // cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  int i = 0;
  // cout << "z " << infile.size<< endl;
  double z[];
    
  for(int i = 0; i < n_lines; i++){}
    z[i] = std::stod(line);
    getline(infile, line);
  }
    
  infile.close();
    
  return z;
}



void model(float *y, float*x, int n_points, float *c, int poly_degree){
        
}


float loglikelihood(float *x_obs, float *y_obs, int n_points, float *c, int poly_degree){
    
}
float logprior(float *c, int poly_degree){
    
}
void MCMC_polynomial(float *x_obs, float *y_obs, int n_points, int n_steps, int poly_degree){
    
}