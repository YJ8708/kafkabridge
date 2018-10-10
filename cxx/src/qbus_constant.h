#ifndef QBUS_CONSTANT_H
#define QBUS_CONSTANT_H
//global config items
#define RD_KAFKA_CONFIG_INTERNAL_TERMINATION_SIGNAL "internal.termination.signal"
#define RD_KAFKA_CONFIG_QUEUE_BUFFERING_MAX_MS "queue.buffering.max.ms"
#define RD_KAFKA_CONFIG_GROUP_ID "group.id"
#define RD_KAFKA_CONFIG_ENABLE_AUTO_COMMIT "enable.auto.commit"
#define RD_KAFKA_CONFIG_TOPIC_METADATA_REFRESH_INTERVAL "topic.metadata.refresh.interval.ms"
#define RD_KAFKA_CONFIG_CLIENT_ID "client.id"
#define RD_KAFKA_CONFIG_SOCKET_BLOKING_MAX_MX "socket.blocking.max.ms"

//topic config items
#define RD_KAFKA_TOPIC_CONFIG_OFFSET_STORED_METHOD "offset.store.method"
#define RD_KAFKA_TOPIC_CONFIG_AUTO_OFFSET_RESET "auto.offset.reset"
#define RD_KAFKA_TOPIC_CONFIG_PRODUCE_OFFSET_REPORT "produce.offset.report"
#define RD_KAFKA_TOPIC_MESSAGE_TIMEOUT "message.timeout.ms"

//sdk config items
#define RD_KAFKA_SDK_CONFIG_SYNC_SEND "send.sync"
#define RD_KAFKA_SDK_CONFIG_LOG_LEVEL "log.level"
#define RD_KAFKA_SDK_CONFIG_ZK_LIST "zk.list"
#define RD_KAFKA_SDK_CONFIG_ENABLE_RD_KAFKA_LOG "enable.rdkafka.log"
#define RD_KAFKA_SDK_CONFIG_BROKER_LIST "broker.list"
//#define RD_KAFKA_SDK_CONFIG_NOT_CHECK_ACCESS_LIMITS "access.limits"
#define RD_KAFKA_SDK_CONFIG_MANUAL_COMMIT_OFFSET_ASYNC "manual.commit.offset.async"
#define RD_KAFKA_SDK_CONFIG_RECORD_MSG "enable.record.msg"
#define RD_KAFKA_SDK_CONFIG_ZK_CONNECT_TIMEOUT "zk.connect.timeout"
#define RD_KAFKA_SDK_CONFIG_PRODUCER_ENABLE_MINI_LATENCY "minimize.produce.latency"
#define RD_KAFKA_SDK_CONFIG_PRODUCER_SPEED_UP_TERMINATE "producer.speedup.terminate"
#define RD_KAFKA_SDK_CONFIG_PRODUCER_HA "producer.send.ha"
#define RD_KAFKA_SDK_LOCAL_SQLITE_SAVE_PATH "producer.send.local.file.path"
#define RD_KAFKA_SDK_PRODUCER_HA_FASET_EXIT "producer.send.ha.fast.exit"
#define RD_KAFKA_SDK_CONSUMER_POLL_TIME "consumer.poll.time.ms"
#define RD_KAFKA_SDK_CONSUMER_MANUAL_COMMIT_TIME "manual.commit.time.ms"
#define RD_KAFKA_SDK_DISABLE_ZK "disable.zk"
#define RD_KAFKA_SDK_USER_MANUAL_COMMIT_OFFSET "user.manual.commit.offset"
#define RD_KAFKA_SDK_FORCE_DESTROY "force.destroy"
//#define RD_KAFKA_CURL_CONNECT_TIMEOUT_MS "curl.connect.timeout"
//#define RD_KAFKA_CURL_CONNECT_RETRY_TIME "curl.connect.retry"
//#define RD_KAFKA_CURL_TIMEOUT_MS "curl.timeout"

//config values
#define RD_KAFKA_CURL_TIMEOUT_DEFAULT "0"
#define RD_KAFKA_CURL_CONNECT_RETRY_TIME_DEFAULT "1"
#define RD_KAFKA_CURL_CONNECT_TIMEOUT_DEFAULT "3000" //MS
#define RD_KAFKAF_SDK_CONFIG_DISABLE_ZK_DEFAULT "false"
#define RD_KAFKA_SDK_CONFIG_ZK_LIST_DEFAULT ""
//#define RD_KAFKA_SDK_CONFIG_NOT_CHECK_ACCESS_LIMITS_DEFAULT "true"
#define RD_KAFKA_SDK_CONFIG_ENABLE_RD_KAFKA_LOG_DEFAULT "false"
#define RD_KAFKA_SDK_CONFIG_LOG_LEVEL_DEFAULT "info"
#define RD_KAFKA_SDK_CONFIG_VALUE_SYNC_SEND_DEFAULT "false"
#define RD_KAFKA_SDK_CONFIG_VALUE_SYNC_SEND "true"
#define RD_KAFKA_CONFIG_QUEUE_BUFFERING_SYNC "1"
#define RD_KAFKA_TOPIC_CONFIG_AUTO_OFFSET_RESET_EARLIEST "earliest"
#define RD_KAFKA_TOPIC_CONFIG_OFFSET_STORED_METHOD_BROKER "broker"
#define RD_KAFKA_CONSUMER_POLL_TIMEOUT_MS 100
#define RD_KAFKA_PRODUCE_ERROR_INIT_VALUE -12345
#define RD_KAFKA_PRODUCE_SYNC_SEND_POLL_TIMEOUT_MS 100
#define RD_KAFKA_SDK_CONFIG_MANUAL_COMMIT_OFFSET_ASYNC_DEFAULT "1"
#define RD_KAFKA_TOPIC_MESSAGE_TIMEOUT_MS "3000"
#define RD_KAFKA_CONFIG_TOPIC_METADATA_REFRESH_INTERVAL_MS "30000"
#define RD_KAFKA_CONFIG_TOPIC_METADATA_REFRESH_INTERVAL_WHEN_SYNC_SEND_MS "300"
#define RD_KAFKA_CONFIG_CLIENT_ID_VALUE "QBus"
#define RD_KAFKA_SDK_CONFIG_RECORD_MSG_DEFAULT "false"
#define RD_KAFKA_SDK_CONFIG_ZK_CONNECT_TIMEOUT_MS_DEFAULT "10000"
#define RD_KAFKA_SDK_CONFIG_PRODUCER_ENABLE_MINI_LATENCY_DEFAULT "false"
#define RD_KAFKA_SDK_MINIMIZE_PRODUCER_LATENCY_VALUE "1"
#define RD_KAFKA_SDK_CONFIG_PRODUCER_SPEED_UP_TERMINATE_DEFAULT "false"
#define RD_KAFKA_SDK_CONFIG_PRODUCER_HA_DEFAULT "false"
#define RD_KAFKA_POLL_TIMIE_OUT_MS 10
#define RD_KAFKA_SYNC_SEND_POLL_TIME 30
#define RD_KAFKA_SYNC_SEND_UINIT_POLL_TIME 300
#define SQLITE_OPERATION_SLEEP_MS 10
#define SQLITE_RETRY_LOCK_FILE_S 1
#define SQLITE_BATCH_READ_COUNT 100
#define RD_KAFKA_SDK_PRODUCER_HA_FASET_EXIT_DEFAULT "false"
#define RD_KAFKA_SDK_CONSUMER_POLL_TIME_DEFAULT_MS "100"
#define RD_KAFKA_SDK_MANUAL_COMMIT_TIME_DEFAULT_MS 200
#define RD_KAFKA_SDK_MANUAL_COMMIT_TIME_DEFAULT_MS_STR "200"
#define RD_KAFKA_SDK_USER_MANUAL_COMMIT_OFFSET_DEFAULT "false"
#define RD_KAFKA_SDK_FORCE_DESTROY_DEFAULT "false"
#endif //ifndef QBUS_CONSTANT_H
