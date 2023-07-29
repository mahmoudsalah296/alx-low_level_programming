#include "main.h"
#include <elf.h>
/**
 * print_error - a fun
 * @errmsg: op
 */
void print_error(char *errmsg)
{
	dprintf(STDERR_FILENO, "%s\n", errmsg);
	exit(98);
}

/**
 * main - a fun
 * @argv: op
 * @argc: op
 * Return: sth
 */
int main(int argc, char **argv)
{
	int fd, i;
	Elf64_Ehdr elf_header;
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: could not open ELF file");
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Error: could not read ELF header");
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Error: file is not an ELF file");
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\n");
	printf("Class:                             %s\n",
		   elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n",
		   elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d\n",
		   elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n",
		   elf_header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n",
		   elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n",
		   elf_header.e_type);
	printf("Entry point address:               %lx\n",
		   elf_header.e_entry);
	if (close(fd) == -1)
		print_error("Error: could not close ELF file");
	return (0);
}
