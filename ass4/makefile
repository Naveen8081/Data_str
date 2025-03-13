ass4.out : insert_after.o main.o delete_element.o insert_at_last.o insert_before.o print_list.o
	gcc -o ass4.out insert_after.o main.o delete_element.o insert_at_last.o insert_before.o print_list.o
insert_after.o : insert_after.c
	gcc -c insert_after.c
main.o : main.c
	gcc -c main.c
delete_element.o : delete_element.c
	gcc -c delete_element.c
insert_before.o : insert_before.c
	gcc -c insert_before.c
insert_at_last.o : insert_at_last.c
	gcc -c insert_at_last.c
print_list.o : print_list.c
	gcc -c print_list.c
clean :
	rm *.o *.out
	