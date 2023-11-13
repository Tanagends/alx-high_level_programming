#!/usr/bin/python3
"""My Base Module"""


class Base:
    """My Base Class"""
    __nb_objects = 0

    def __init__(self, id=None):
        if id:
            self.id = id
        else:
            __nb_objects += 1
            self.id = __nb_objects
