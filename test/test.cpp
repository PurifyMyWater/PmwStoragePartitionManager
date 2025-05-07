#include <unity.h>
#include <StoragePartitionManager.h>

TEST_CASE("getConf", "[PMW-StoragePartitionManagerComponent]")
{
    StoragePartitionManager::getConf();
    TEST_ASSERT_TRUE(true);
}
