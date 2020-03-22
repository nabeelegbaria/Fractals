#include <iostream>

/**
 * A class which represents a Fractal.
 * in this class there were pure functions , so we can not make an instance of it.
 */
class Fractal
{
public:
/**
 * a default constructor.
 */
    Fractal() = default;

/**
 * a copy constructor which receives a Fractal and creates copy of it.
 * @param other
 */
    Fractal(const Fractal &other) = default;

/**
 * operator = to assign this fractal as the received one.
 * @param other
 * @return fractal.
 */
    Fractal &operator=(const Fractal &other) = default;

/**
 * a move constructor which receive a fractal , copy it and delete it.
 * @param other
 */
    Fractal(Fractal && other) noexcept = default;

/**
 * operator = to assign this fractal as the received one, then deletes the received .
 * @param other
 * @return fractal.
 */
    Fractal &operator=(Fractal && other) = default;

/**
 * a default dextructor.
 */
    virtual ~Fractal() = default;

/**
 * This function receives a point x represented as x,y and checks if it legal to draw at this point or not .
 * @param x
 * @param y
 * @return true if it is legal to draw at the given point , false otherwise.
 */
    virtual bool point(int x, int y) = 0;

/**
 * This function draw the fractal according to the given height .
 */
    virtual void draw() = 0;

/**
 * This function receives an int and initialize the height of the fractal equal to the given int .
 * @param num
 */
    virtual void setheight(int num) = 0;
};

// **************************************** Sierpinski Carpet Fractal ****************************************

/**
 * A class which represents Sierpinski Carpet Fractal .
 */
class Carpet : public Fractal
{
public:
/**
 * a default constructor.
 */
    Carpet() = default;

/**
 * a copy constructor which receives a Sierpinski Carpet Fractal and creates copy of it.
 * @param other
 */
    Carpet(const Carpet &other) = default;

/**
 * operator = to assign this Sierpinski Carpet Fractal  as the received one.
 * @param other
 * @return fractal.
 */
    Carpet &operator=(Carpet &other) = default;

/**
 * a move constructor which receive a Sierpinski Carpet Fractal , copy it and delete it.
 * @param other
 */
    Carpet(Carpet && other) noexcept = default;

/**
 * operator = to assign this Sierpinski Carpet Fractal as the received one, then deletes the received .
 * @param other
 * @return fractal.
 */
    Carpet &operator=(Carpet && other) = default;

/**
 * a default dextructor.
 */
    virtual ~Carpet() = default;

/**
 * This function receives a point x represented as x,y and checks if it legal to draw at this point or not .
 * @param x
 * @param y
 * @return true if it is legal to draw at the given point , false otherwise.
 */
    virtual bool point(int x, int y);

/**
 * This function draw the Sierpinski Carpet Fractal according to the given height .
 */
    virtual void draw();

/**
 * This function receives an int and initialize the height of the Sierpinski Carpet Fractal equal to the given int .
 * @param num
 */
    virtual void setheight(int num);

private:
    int height;
    int key = 1;
};

// **************************************** Sierpinski Sieve Fractal ****************************************

/**
 * A class which represents Sierpinski Sieve Fractal
 */
class Sieve : public Fractal
{
public:
/**
 * a default constructor.
 */
    Sieve() = default;

/**
 * a copy constructor which receives a Sierpinski Sieve Fractal and creates copy of it.
 * @param other
 */
    Sieve(const Sieve &other) = default;

/**
 * operator = to assign this Sierpinski Sieve Fractal  as the received one.
 * @param other
 * @return fractal.
 */
    Sieve &operator=(Sieve &other) = default;

/**
 * a move constructor which receive a Sierpinski Sieve Fractal , copy it and delete it.
 * @param other
 */
    Sieve(Sieve && other) noexcept = default;

/**
 * operator = to assign this Sierpinski Sieve Fractal as the received one, then deletes the received .
 * @param other
 * @return fractal.
 */
    Sieve &operator=(Sieve && other) = default;

/**
 * a default dextructor.
 */
    virtual ~Sieve() = default;

/**
 * This function receives a point x represented as x,y and checks if it legal to draw at this point or not .
 * @param x
 * @param y
 * @return true if it is legal to draw at the given point , false otherwise.
 */
    virtual bool point(int x, int y);

/**
 * This function draw the Sierpinski Sieve Fractal according to the given height .
 */
    virtual void draw();

/**
 * This function receives an int and initialize the height of the Sierpinski Sieve Fractal equal to the given int .
 * @param num
 */
    virtual void setheight(int num);

private:
    int height;
    int key = 2;
};

// **************************************** Cantor Dust Fractal ****************************************

/**
 * A class which represents Cantor Dust Fractal
 */
class Dust : public Fractal
{
public:
/**
 * a default constructor.
 */
    Dust() = default;

/**
 * a copy constructor which receives a Cantor Dust Fractal and creates copy of it.
 * @param other
 */
    Dust(const Dust &other) = default;

/**
 * operator = to assign this Cantor Dust Fractal  as the received one.
 * @param other
 * @return fractal.
 */
    Dust &operator=(Dust &other) = default;

/**
 * a move constructor which receive a Cantor Dust Fractal , copy it and delete it.
 * @param other
 */
    Dust(Dust && other) noexcept = default;

/**
 * operator = to assign this Cantor Dust Fractal as the received one, then deletes the received .
 * @param other
 * @return fractal.
 */
    Dust &operator=(Dust && other) = default;

/**
 * a default dextructor.
 */
    virtual ~Dust() = default;

/**
 * This function receives a point x represented as x,y and checks if it legal to draw at this point or not .
 * @param x
 * @param y
 * @return true if it is legal to draw at the given point , false otherwise.
 */
    virtual bool point(int x, int y);

/**
 * This function draw the Cantor Dust Fractal according to the given height .
 */
    virtual void draw();

/**
 * This function receives an int and initialize the height of the Cantor Dust Fractal equal to the given int .
 * @param num
 */
    virtual void setheight(int num);

private:
    int height;
    int key = 3;
};

