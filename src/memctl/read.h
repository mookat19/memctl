#ifndef MEMCTL_CLI__READ_H_
#define MEMCTL_CLI__READ_H_

#include "memctl/memctl_types.h"

#include "disassemble.h"
#include "memory.h"

/*
 * memctl_read
 *
 * Description:
 * 	Read kernel memory and format the output to stdout.
 *
 * Parameters:
 * 		address			The kernel address to read.
 * 		size			The number of bytes to read.
 * 		flags			Memory access flags.
 * 		width			The formatting width.
 * 		access			The access width while reading.
 *
 * Returns:
 * 	True if the read was successful.
 */
bool memctl_read(kaddr_t address, size_t size, memflags flags, size_t width, size_t access);

/*
 * memctl_dump
 *
 * Description:
 * 	Read kernel memory and write a dump output to stdout.
 *
 * Parameters:
 * 		address			The kernel address to read.
 * 		size			The number of bytes to read.
 * 		flags			Memory access flags.
 * 		width			The formatting width.
 * 		access			The access width while reading.
 *
 * Returns:
 * 	True if the read was successful.
 */
bool memctl_dump(kaddr_t address, size_t size, memflags flags, size_t width, size_t access);

/*
 * memctl_dump_binary
 *
 * Description:
 * 	Dump raw kernel memory to stdout.
 *
 * Parameters:
 * 		address			The kernel address to read.
 * 		size			The number of bytes to read.
 * 		flags			Memory access flags.
 * 		access			The access width while reading.
 *
 * Returns:
 * 	True if the read was successful.
 */
bool memctl_dump_binary(kaddr_t address, size_t size, memflags flags, size_t access);

#if MEMCTL_DISASSEMBLY

/*
 * memctl_disassemble
 *
 * Description:
 * 	Disassemble kernel memory to stdout.
 *
 * Parameters:
 * 		address			The kernel address to start disassembling at.
 * 		length			The number of bytes to read.
 * 		flags			Memory access flags.
 * 		access			The access width while reading.
 *
 * Returns:
 * 	True if the read was successful.
 */
bool memctl_disassemble(kaddr_t address, size_t length, memflags flags, size_t access);

#endif // MEMCTL_DISASSEMBLY

/*
 * memctl_read_string
 *
 * Description:
 * 	Read the C-style string starting at the given address.
 *
 * Parameters:
 * 		address			The kernel address to read.
 * 		size			The maximum number of bytes to read.
 * 		flags			Memory access flags.
 * 		access			The access width while reading.
 *
 * Returns:
 * 	True if the read was successful.
 */
bool memctl_read_string(kaddr_t address, size_t size, memflags flags, size_t access);

#endif
