#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>

const char *Notaries_elected[][2] =
{
{
    "0_jl777_testA", "03b7621b44118017a16043f19b30cc8a4cfe068ac4e42417bae16ba460c80f3828"
}, {
    "0_jl777_testB", "02ebfc784a4ba768aad88d44d1045d240d47b26e248cafaf1c5169a42d7a61d344"
}, {
    "SHossain_EU", "0239b39630f71b5ef4e145ab9bd9daaf0871fa59904cf9c216619609d2d6ed5ee0"
}, {
    "metaphilibert_SH", "0284af1a5ef01503e6316a2ca4abf8423a794e9fc17ac6846f042b6f4adedc3309"
}, {
    "webworker01_NA", "032d5e7e1e67d71bb02f95774c3382348c02ff5bd6cb844afb9c57b1eae040b175"
}, {
    "voskcoin_NA", "03a47c429b6fd83dc9687ba409ee6f34823094b97bad4c0f4f60649c55bbdf497b"
}, {
    "emmanux_EU", "03206f0a4418e3fe985c21ffdd9f883ea58a51c6271c488bb9737fed511ada6bba"
}, {
    "meshbits_notarytest_EU", "02463d539fcd89beddf2b4b3e3c1ea141efe8cac4661a5bbebf81e4059c1115af1"
}, {
    "adrianpante_NA", "030109570dc62648f5e5d56133a3ccb9cf7e3caa16a4420530b74b137247b77da0"
}, {
    "adrianpante_EU", "0384ba5bc403b9a4aa3a5c14f39ebb0e3db057c90a46a2fd80e6fe82dbff6f1658"
}, {
    "adrianpante_SH", "03ffc7435e4d7640ca4b589a78f2092b921d379670c5ebd58414846fe9048867a7"
}, {
    "adrianpante_AE", "020b2bed39fd504104749368741e0d0521339e3e729331e34f9c9a762a143a99de"
}, {
    "infotech-al_NA", "03b381daa68916bb9054520e3cb63abe7970cdb854b0b8ce16f0e3e82b65173867"
}, {
    "cipi_EU", "0212666218770ce0f1dada215aafa655a5d8ddee33902ba367f4b7caced4395b6b"
}, {
    "peer2cash_AR", "02b5c20deb16e3dd2890d6537c02623077287e14203094a0f63bc3ae026d3dfd65"
}, {
    "peer2cash_SH", "02164ac655cf9b37381872c7482983bf0702c2f61bc123be23ddd8b925444c5673"
}, {
    "libscott-test_AE", "0367a99aaddbc1603c88678d470aa5e95858f5c1d3a4b74eaacb6770df0a66995b"
}, {
    "PTYX_test", "03ea1505756a9bc657930a59d14858efd8dea27782aec556ed81e613c15b8ddbbe"
}, {
    "blackjok3r_SH", "0244ef4a6b38ed112a0c50754cfe9eca8ecbef15c87cda86c1b2157e1a4545c962"
}, {
    "goldenman_AR", "03c360982f79e6c02ea33d33ffc010d3bbb57edb1659c5b43d354435c2cd3b394d"
}, {
    "lukechilds_NA", "0273d3924cf553b5a3baa6d458ecb411558582c3c468fd3ddf5dd29e0e3f1cbb15"
}, {
    "decker_test_AR", "0319ac84f941b29f6ed276ebd161772e2e13ad0d51cd834db550deda0b9835f1aa"
}, {
    "komodominingpool_test_EU", "023145a94ad53de6f3048aa0c778d6a9f7e3baed4fc8c17756f6f3eb53adc857a4"
}, {
    "jorian_test", "032c522148cf737b2864bb4a2729aca3a486a5417c1207f308a6fe5d60f7a864a6"
}, {
    "jackson_test", "02a820eac677662587844316ea96b94e48983efb2ce80c2f8f0e1d4a0ee64e5fdc"
}, {
    "thegaltmines_test1", "0278397f84cc5614c8f40be4774fd8579a652b755293e7e9ba43577aec99b19e3c"
}, {
    "thegaltmines_test2", "031bea28bec98b6380958a493a703ddc3353d7b05eb452109a773eefd15a32e421"
}, {
    "thegaltmines_test3", "0352384815030a2b97d518177ee117122e647565f1a03d96d9bd37f8724aa7cfdb"
}, {
    "siu_test", "03f82c8c363d23076420a39904f9616d59c26a3d8dc7c51f67d8d3a94335431970"
}, {
    "cipi_AR", "020358f7250d4a46568a0df2992117fee765fd7b8fc6f5b14efedbbde1f33beaeb"
}, {
    "patchkez_EU", "03461ec21bacdc3f02c2fa8b288824494f67a58ca783dce0897e78f53fdf641b73"
}};

/*
char NOTARY_CURRENCIES[][16] = { "USD", "EUR", "JPY", "GBP", "AUD", "CAD", "CHF", "NZD",
    "CNY", "RUB", "MXN", "BRL", "INR", "HKD", "TRY", "ZAR", "PLN", "NOK", "SEK", "DKK", "CZK", "HUF", "ILS", "KRW", "MYR", "PHP", "RON", "SGD", "THB", "BGN", "IDR", "HRK",
    "REVS", "SUPERNET", "DEX", "PANGEA", "JUMBLR", "BET", "CRYPTO", "HODL", "SHARK", "BOTS", "MGW", "COQUI", "WLC", "KV", "CEAL", "MESH", "MNZ", "CHIPS", "MSHARK" }; // "LTC",
*/

char NOTARY_CURRENCIES[][16] = { "PIZZA", "BEER" };

void _iguana_notarystats(char *fname,int32_t totals[64],int32_t dispflag)
{
    FILE *fp; uint64_t signedmask; long fpos,startfpos; int32_t i,height,iter,prevheight;
    if ( (fp= fopen(fname,"rb")) != 0 )
    {
        printf("opened %s\n",fname);
        startfpos = 0;
        prevheight = -1;
        for (iter=0; iter<2; iter++)
        {
            while ( 1 )
            {
                fpos = ftell(fp);
                if (fread(&height,1,sizeof(height),fp) == sizeof(height) && fread(&signedmask,1,sizeof(signedmask),fp) == sizeof(signedmask) )
                {
                    //printf("%6d %016llx\n",height,(long long)signedmask);
                    if ( height < prevheight )
                    {
                        startfpos = fpos;
                        if ( iter == 0 )
                            printf("found reversed height %d vs %d\n",height,prevheight);
                        else printf("fpos.%ld fatal unexpected height reversal %d vs %d\n",fpos,height,prevheight);
                    }
                    if ( iter == 1 && (height >= 180000 || strcmp(fname,"signedmasks") != 0) )
                    {
                        for (i=0; i<64; i++)
                        {
                            if ( ((1LL << i) & signedmask) != 0 )
                            {
                                totals[i]++;
                                if ( dispflag > 1 )
                                    printf("%2d ",i);
                            }
                        }
                        if ( dispflag > 1 )
                            printf("height.%d %016llx %s\n",height,(long long)signedmask,fname);
                    }
                    prevheight = height;
                } else break;
            }
            if ( iter == 0 )
            {
                prevheight = -1;
                fseek(fp,startfpos,SEEK_SET);
                printf("set startfpos %ld\n",startfpos);
            }
        }
        fclose(fp);
        if ( dispflag != 0 )
        {
            printf("after %s\n",fname);
            for (i=0; i<64; i++)
            {
                if ( totals[i] != 0 )
                    printf("%s, %d\n",Notaries_elected[i][0],totals[i]);
            }
        }
    } else printf("couldnt open.(%s)\n",fname);
}

int main()
{
    int32_t i; char fname[512];
    int32_t totals[64];
    int32_t dispflag = 1;

    printf("\n\x1B[01;37m***\x1B[0m \x1B[01;32mDecker\x1B[0m wanna be NN too ;)\n");
    sleep(3);

    memset(totals,0,sizeof(totals));

    _iguana_notarystats("signedmasks",totals,dispflag);
    for (i=0; i<sizeof(NOTARY_CURRENCIES)/sizeof(*NOTARY_CURRENCIES); i++)
    {
        sprintf(fname,"%s/signedmasks",NOTARY_CURRENCIES[i]);
        _iguana_notarystats(fname,totals,dispflag);
    }

    return 0;
}
