#!/usr/bin/perl -w
# make_pkts.pl
#

use strict;
use NF::RegressLib;
use NF::PacketGen;
use NF::PacketLib;
use CryptoNICLib;

use reg_defines_crypto_nic;

my @interfaces = ("nf2c0", "nf2c1", "nf2c2", "nf2c3", "eth1", "eth2");
nftest_init(\@ARGV,\@interfaces,);
nftest_start(\@interfaces);

my $MAC_1 = '00:ca:fe:00:00:01';
my $MAC_2 = '00:ca:fe:00:00:02';
my $MAC_3 = '00:ca:fe:00:00:03';
my $MAC_4 = '00:ca:fe:00:00:04';

my $IP_1 = '192.168.1.1';
my $IP_2 = '192.168.2.1';
my $IP_3 = '192.168.3.1';
my $IP_4 = '192.168.4.1';

my $length = 100;
my $TTL = 30;
my $DA = 0;
my $SA = 0;
my $dst_ip = 0;
my $src_ip = 0;
my $pkt;


my $unmatched_hoh = nftest_finish();
my $total_errors = nftest_print_errors($unmatched_hoh);

if ($total_errors==0) {
  print "SUCCESS!\n";
  exit 0;
} else {
  print "FAIL: $total_errors errors\n";
  exit 1;
}
