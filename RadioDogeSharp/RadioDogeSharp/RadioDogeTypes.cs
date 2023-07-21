﻿namespace RadioDoge
{
    internal enum SerialCommandType
    {
        None,
        GetNodeAddress,
        SetNodeAddresses,
        Ping,
        Message,
        HardwareInfo = 0x3f, //Translates to sending '?'
        DisplayControl = 0x64, // Translates to sending 'd'
        HostFormedPacket = 0x68, // Translates to sending 'h'
        MultipartPacket = 0x6D, // Translates to sending 'm'
        ResultCode = 0xFE
    }

    internal enum DisplayType
    {
        Custom,
        RadioDogeLogo,
        DogeAnimation,
        CoinAnimation
    }

    internal enum DogeCommandType
    {
        Registration = 15,
        GetDogeAddress = 120,
        SendDogeAddress = 240,
        GetUTXOs = 111,
        SendUTXOs = 112,
        RequestBalance = 101,
        BalanceReceived = 202,
        DogeCommandSuccess = 1,
        DogeCommandFailure = 254,
        TransactionRequest = 170,
        TransactionResult = 171,
    }

    internal enum DogeResponseCode
    {
        Success,
        InvalidAddress,
        AlreadyRegistered,
        NotRegistered,
        InvalidPin,
        NoStoredUTXOS,
        WatchlistFailure,
    }

    internal enum RegistrationFunction
    {
        AddRegistration = 10,
        RemoveRegistration = 20,
        UpdatePin = 30
    }

    internal enum ModeType
    {
        LoRaSetup,
        Doge,
        SPV,
        Test,
        Quit,
        Invalid
    }

    internal enum TestFunctions
    {
        SendMultipartPacket,
        SendSinglePacket,
        SendCountingTest,
        DisplayTest,
        LibDogecoinTest,
    }

    internal enum SPVFunctions
    {
        StartSPV,
        StopSPV
    }
}
