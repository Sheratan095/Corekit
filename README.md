Usage:


Make file explanation:

$@ reneme with target file name so in the directory of c file
$< takes the firts prerequisite, so the c file
-c flag is used to generate .o file
'-c $<' means that the compiler should compile the source file specified by the first prerequisite without linking it, resulting in the generation of an object file.

<span style="color: green">
	%.o: %.c
	@$(COMPILE) -c $< -Iincludes -o $@
	@echo "$(BLUE)[LIBFTX]:\t$< COMPILED!"
</span>
