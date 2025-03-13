ass2.out : delete_element.o insert_at_first.o insert_after.o insert_before.o main.o print_list.o insert_nth.o
	gcc -o  ass2.out delete_element.o insert_after.o insert_before.o insert_at_first.o insert_nth.o main.o print_list.o
delete_element.o : delete_element.c
	gcc -c delete_element.c
insert_after.o : insert_after.c
	gcc -c insert_after.c
insert_at_first.o : insert_at_first.c
	gcc -c insert_at_first.c
insert_before.o : insert_before.c
	gcc -c insert_before.c
insert_nth.o : insert_nth.c
	gcc -c insert_nth.c
main.o : main.c
	gcc -c main.c
print_list.o :print_list.c
	gcc -c print_list.c
clean :
	rm *.o *.out
