
all:
	${CC} main.c -o git-app
	
install:
	install -d ${D}${bindir}
	install -m 0755 git-app ${D}${bindir}
