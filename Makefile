CONTIKI_PROJECT = demo-counter
all: $(CONTIKI_PROJECT)

PROJECT_SOURCEFILES += mycounter.c

CONTIKI = /home/islam/contiki-ng
include $(CONTIKI)/Makefile.include