
all: 
	${CC} main.c ${CFLAGS} ${LDFLAGS}  -o git-app
	
install:
	install -d ${D}${bindir}
	install -m 0755 git-app ${D}${bindir}

clean:
	rm -f git-app