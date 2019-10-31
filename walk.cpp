#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>

int main()
{	
	float propuesta = drand48();
	float sigma = 1.0;
	float delta = 1.0;

    for(int i=0, i<10000, i++)
	{	
		
        float propuesta2  = propuesta + (drand48()-0.5)*delta;
			
		float gauss = exp(-propuesta**2/(2.0*sigma**2))/sqrt(2.0*pi*sigma**2);
		float gauss2 = exp(-propuesta2**2/(2.0*sigma**2))/sqrt(2.0*pi*sigma**2);
		
			
		if (1< gauss2/gauss)
		{
			float r = 1.0
		}
		if (1> gauss2/gauss)
		{
			float r = gauss2/gauss
		}
		
		
        float alpha = drand48();
		
        if(alpha<r)
		{
			std::cout<<propuesta2<<std::endl;
		}
        else
		{
            std::cout<<propuesta<<std::endl;
		}		
	}
	return 0;
}

