/* Configure I/O Ports */

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include  "svgrgb565.h"
#include "bezier.h"
#include "wu.h"

 /*{Small Graphics library for the LaFortuna}
    Copyright (C) {2016}  {Nicholas Bishop}

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>. */

void init(void) {

    /* 8MHz clock, no prescaling (DS, p. 48) */
    CLKPR = (1 << CLKPCE);
    CLKPR = 0;

	init_bres();
	
	
	/*drawLine(0, 50, 110, 70, RED);
	drawLine(300,200, 310, 230, BLUE);
	drawLine(200, 170, 250, 190, GREEN);
	drawLine(100, 100, 80, 45, YELLOW);*/
	
	/*drawLine(150, 150, 150, 170, YELLOW);
	drawLine(190, 150, 190, 170, YELLOW);
	drawLine(150, 210, 190, 210, YELLOW);
	drawLine(150, 190, 150, 210, YELLOW);
	drawLine(190, 190, 190, 210, YELLOW);*/
	
	drawCircle(160,120,100,YELLOW);
	drawCircle(115, 75, 15,YELLOW);
	drawCircle(205, 75, 15,YELLOW);
	
	uint16_t x[4] = {115, 135, 185, 205};
	uint16_t y[4] = {165, 195, 195,165};
	plotBezierBuffer(x,y, YELLOW, 0.1);
	
	/*uint16_t x[4] = {50, 30, 70, 50};
	uint16_t y[4] = {10, 20, 40, 50};
	
	uint16_t x1[4] = {300, 10, 92, 100};
	uint16_t y2[4] = {200, 90, 50, 0};
	
	plotBezier(x,y, YELLOW, 0.02);
	plotBezier(x1,y2, GREEN, 0.02);
	
	
	drawAALine(0.0,0.0, 300.0,177.0, RED);
	drawLine(0,177, 300,0, RED);
	drawLine(0,178, 301,0, RED);
	
	drawAALine(50.0,240.0, 50.0,210.0, RED);
	drawLine(100,240, 100,210, RED);
	
	plotPixel(300,50, shade(RED, 0.1));
	plotPixel(300,51, shade(RED, 0.2));
	plotPixel(300,52, shade(RED, 0.3));
	plotPixel(300,53, shade(RED, 0.4));
	plotPixel(300,54, shade(RED, 0.5));
	plotPixel(300,55, shade(RED, 0.6));
	plotPixel(300,56, shade(RED, 0.7));
	plotPixel(300,57, shade(RED, 0.8));
	plotPixel(300,58, shade(RED, 0.9));*/
	
	
}

int main() {
	init();
	return 0;
}


