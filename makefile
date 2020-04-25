
all:clean
	cat Doxyfile.template   > Doxyfile
	#echo "INPUT = "        >> Doxyfile
	#echo "OUTPUT_DIRECTORY = " >> Doxyfile
	echo "PROJECT_NAME           = \"SOC API\" " >> Doxyfile
	echo "PROJECT_NUMBER = 1.2.3.4" >> Doxyfile	
	echo "ENABLED_SECTIONS  = TEST"  >> Doxyfile
	doxygen Doxyfile
	cp project.ico html/project.ico
	#cp demo.svg html/demo.svg
clean:
	rm -rf html
	