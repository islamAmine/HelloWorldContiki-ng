#include "contiki.h"
#include "sys/etimer.h"
#include "mycounter.h"

#include <stdio.h> //for printf()

PROCESS(counter_process, "Counter Process");
AUTOSTART_PROCESSES(&counter_process);

//declaration
static struct etimer timer;
static int counter = 0;

PROCESS_THREAD(counter_process, ev, data){
	//initialization
	//counter = 0;

	PROCESS_BEGIN();

	printf("Demo Counter\n");
	while(1){
		etimer_set(&timer, 3 * CLOCK_SECOND);
		PROCESS_WAIT_EVENT_UNTIL(etimer_expired(&timer));

		counter = next_counter(counter);
		printf("Counter: %d\n",counter);
	}

	PROCESS_END();
}