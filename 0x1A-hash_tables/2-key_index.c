#include "hash_tables.h"

/**
 * key_index - compputes the index of a key from its hash
 * @key: key
 * @size: Size of Array
 *
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
