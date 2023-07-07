#include "hash_tables.h"

/**
 * key_index - function that gives you the index of the key
 * @size: size of the hash table(array)
 * @key: This is the key
 * Return: the index at which the key/value pair should be stored
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
