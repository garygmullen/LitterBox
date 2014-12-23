# Makefile

TOPDIR = ..
BINDIR = $(TOPDIR)/bin
OBJDIR = $(TOPDIR)/obj

$(BINDIR)/litterbox: $(OBJDIR)/main.o
	cc -o $(BINDIR)/litterbox $(OBJDIR)/main.o

$(OBJDIR)/main.o: main.c
	cc -c -o $(OBJDIR)/main.o main.c

clean:
	rm $(BINDIR)/*
	rm $(OBJDIR)/*
