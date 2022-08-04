#include <benchmark/benchmark.h>
#include <string_split.hpp>
#include <boost/algorithm/string.hpp>

static std::string s{"Hello,World,Yeaaah,sjdhsadsad,sadsadsadas,dasdsadsad,sadasdsadsad,sadsadsadsadsadsad,sadsadsadsad,sadsadsadsadsad,sadsadsadsadsa,dsadsadsa,dsdsadsadsa,dsadsadsadsa,dsadsadsa,das"};
static std::string token = {","};
static void MySplit(benchmark::State &state)
{
    for (auto _ : state)
    {
        std::vector<std::string> v{};
        woow::split(v, s, token);
    }
}

static void BoostSplit(benchmark::State &state)
{
    for (auto _ : state)
    {
        std::vector<std::string> v{};
        boost::split(v, s, boost::is_any_of(token));
    }
}

static void SO_SOL(benchmark::State &state)
{
    for (auto _ : state)
    {
        std::vector<std::string> v;
        stackoverflow::split(v, s, token);
    }
}

BENCHMARK(BoostSplit);
BENCHMARK(MySplit);
BENCHMARK(SO_SOL);
BENCHMARK_MAIN();
