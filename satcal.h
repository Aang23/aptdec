{/* calibration coeff from NOAA KLM POES satellite user guide */
{/* NOAA-15 */
{ /* PRT coeff d0,d1,d2 */
{276.60157 , 0.051045 , 1.36328E-06},
{276.62531 , 0.050909 , 1.47266E-06},
{276.67413 , 0.050907 , 1.47656E-06},
{276.59258 , 0.050966 , 1.47656E-06}
},
{ /* channel radiance coeff vc,A,B*/
{925.4075 , 0.337810 , 0.998719}, /* channel 4 */
{839.8979 , 0.304558 , 0.999024}, /* channel 5 */
{2695.9743 , 1.621256 , 0.998015} /* channel 3B */
},
{ /*  nonlinear radiance correction Ns,b0,b1,b2 */
{-4.50 , {4.76 , -0.0932 , 0.0004524}}, /* channel 4 */
{-3.61 , {3.83 , -0.0659 , 0.0002811}},  /* channel 5*/
{0.0,{0.0,0.0,0.0}}  /* channel 3B*/
}
},
{/* NOAA 17 */
{ /* PRT coeff d0,d1,d2 */
{276.628 , 0.05098 , 1.371e-06},
{276.538 , 0.05098 , 1.371e-06},
{276.761 , 0.05097 , 1.369e-06},
{276.660 , 0.05100 , 1.348e-06}
},
{ /* channel radiance coeff vc,A,B*/
{926.2947 , 0.271683 , 0.998794}, /* channel 4 */
{839.8246 , 0.309180 , 0.999012}, /* channel 5 */
{2669.3554 , 1.702380 , 0.997378} /* channel 3B */
},
{ /*  nonlinear radiance correction Ns,b0,b1,b2 */
{-8.55 , {8.22 , -0.15795 , 0.00075579}}, /* channel 4 */
{-3.97 , {4.31 , -0.07318 , 0.00030976}}, /* channel 5 */
{0.0,{0.0,0.0,0.0}}  /* channel 3B*/
}
}
};


const float c1=1.1910427e-5;
const float c2=1.4387752;

