pkg = import('pkgconfig')

libnetdb = static_library('wildebeest-netdb',
    sources: ['lwb_netdb.c', 'gethostent.c', 'getnetent.c'],
    install: true,
    include_directories: root_includedir,
)

pkg.generate(libnetdb,
    name: 'libwildebeest-netdb',
    subdirs: 'libwildebeest',
    libraries: '-Wl,--wrap=sethostent -Wl,--wrap=endhostent -Wl,--wrap=gethostent -Wl,--wrap=gethostent_r -Wl,--wrap=setnetent -Wl,--wrap=endnetent -Wl,--wrap=getnetent -Wl,--wrap=getnetent_r',
)
