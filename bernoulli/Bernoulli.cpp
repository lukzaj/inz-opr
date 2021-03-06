//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Bernoulli.cpp
//  @ Date : 19.03.2018
//  @ Author :
//
//


#include "Bernoulli.h"

float Bernoulli::getValue()
{
    calculate();
    return value;
}

void Bernoulli::setK(int k)
{
    this->k = k;
}

void Bernoulli::setN(int n)
{
    this->n = n;
}

void Bernoulli::setP(float p)
{
    this->p = p;
}

Bernoulli::Bernoulli(int k, int n, float p)
{
    this->k = k;
    this->n = n;
    this->p = p;
}

void Bernoulli::calculate()
{
    newton.setK(k);
    newton.setN(n);
    pk.setBase(p);
    pk.setExponent(k);
    qnk.setBase(1-p);
    qnk.setExponent(n-k);
    value = newton.getValue() * pk.getValue() * qnk.getValue();
}

