#include "Fractal.h"
#include <cmath>

// **************************************** IMPLEMENTATION OF Fractal.h ****************************************

// ******************************** IMPLEMENTATION OF Sierpinski Carpet Fractal ********************************

/**
 * This function receives a point x represented as x,y and checks if it legal to draw at this point or not .
 * @param x
 * @param y
 * @return true if it is legal to draw at the given point , false otherwise.
 */
bool Carpet::point(int x, int y)
{
    while (true)
    {
        if (x == 0 || y == 0)
        {
            return true;
        }
        if (x % 3 == 1 && y % 3 == 1)
        {
            return false;
        }
        x /= 3;
        y /= 3;
    }
}

/**
 * This function draw the Sierpinski Carpet Fractal according to the given height .
 */
void Carpet::draw()
{
    for (int i = 0; i < pow(3, this->height); ++i)
    {
        for (int j = 0; j < pow(3, this->height); ++j)
        {
            if (point(i, j))
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

/**
 * This function receives an int and initialize the height of the Sierpinski Carpet Fractal equal to the given int .
 * @param num
 */
void Carpet::setheight(int num)
{
    this->height = num;

}

// ******************************** IMPLEMENTATION OF Sierpinski Sieve Fractal ********************************

/**
 * This function receives a point x represented as x,y and checks if it legal to draw at this point or not .
 * @param x
 * @param y
 * @return true if it is legal to draw at the given point , false otherwise.
 */
bool Sieve::point(int x, int y)
{
    while (true)
    {
        if (x == 0 || y == 0)
        {
            return true;
        }
        if (x % 2 == 1 && y % 2 == 1)
        {
            return false;
        }
        x /= 2;
        y /= 2;
    }
}

/**
 * This function draw the Sierpinski Sieve Fractal according to the given height .
 */
void Sieve::draw()
{
    for (int i = 0; i < pow(2, this->height); ++i)
    {
        for (int j = 0; j < pow(2, this->height); ++j)
        {
            if (point(i, j))
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";

            }
        }
        std::cout << std::endl;
    }
}

/**
 * This function receives an int and initialize the height of the Sierpinski Sieve Fractal equal to the given int .
 * @param num
 */
void Sieve::setheight(int num)
{
    this->height = num;
}

// ******************************** IMPLEMENTATION OF Cantor Dust Fractal ********************************


/**
 * This function receives a point x represented as x,y and checks if it legal to draw at this point or not .
 * @param x
 * @param y
 * @return true if it is legal to draw at the given point , false otherwise.
 */
bool Dust::point(int x, int y)
{
    while (true)
    {
        if (x == 0 && y == 0)
        {
            return true;
        }
        if (x % 3 == 1 || y % 3 == 1)
        {
            return false;
        }
        x /= 3;
        y /= 3;
    }
}

/**
 * This function draw the Cantor Dust Fractal according to the given height .
 */
void Dust::draw()
{
    for (int i = 0; i < pow(3, this->height); ++i)
    {
        for (int j = 0; j < pow(3, this->height); ++j)
        {
            if (point(i, j))
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";

            }
        }
        std::cout << std::endl;
    }
}

/**
 * This function receives an int and initialize the height of the Cantor Dust Fractal equal to the given int .
 * @param num
 */
void Dust::setheight(int num)
{
    this->height = num;
}

