#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    relts = {}
    for key in a_dictionary:
        relts[key] = a_dictionary[key] + a_dictionary[key]
    return relts
