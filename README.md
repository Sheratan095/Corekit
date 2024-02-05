# Usage

``` makefile
	COREKIT_PATH = ./corekit #path of corekit folder

	INCLUDES = -I$(COREKIT_PATH)/includes #path of includes folder in corekit

	%.o: %.c
		cc $(INCLUDES) -c $< -o $@

	$(NAME): $(OBJ)
		$(MAKE) -C $(COREKIT_PATH) #execute make in corekit folder
		cc $(INCLUDES) $(OBJ) -L$(COREKIT_PATH) -lcorekit -o $(NAME) #-lcorekit: includes library name (libcorekit)
```


_In this example the project structure is:_

	test↓

		corekit↓

			includes↓

			src↓

			Makefile↓

			gitingore

			README.md

		main.c

		makefile



# Makefile explanation


The library (.a file) is called libcorekit.a beacause all the library during compilation must start with 'lib' suffix


\t is just a tab


this isn't a color but 's a control code to reset the text attributes to the default, including color.

R=\033[0m


$@ reneme with target file name so in the directory of c file
$< takes the firts prerequisite, so the c file
-c flag is used to generate .o file
'-c $<' means that the compiler should compile the source file specified by the first prerequisite without linking it, resulting in the generation of an object file.
Last row is to display every c file that is compiled and turned in .o file (commented)

	%.o: %.c
		@$(COMPILE) -c $< -Iincludes -o $@
		@echo "$(BLUE)[LIBFTX]:\t$< COMPILED!"


- [Usage](#usage)
- [Makefile explanation](#makefile-explanation)
